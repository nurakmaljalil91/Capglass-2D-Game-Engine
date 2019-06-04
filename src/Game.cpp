#include "Game.h"

cg2d::Game::Game()
{
    std::cout << "The constructor for the game" << std::endl;
}

void cg2d::Game::Create(uint16_t width, uint16_t height, const char *title)
{
    this->width = width;
    this->height = height;
    window = new sf::RenderWindow(sf::VideoMode({width, height}), title, sf::Style::Default);
}

void cg2d::Game::Start()
{
    std::cout << "Game is starting!" << std::endl;
    circle = new sf::CircleShape(100.0f);
    circle->setFillColor(sf::Color::Green);
}

void cg2d::Game::Update()
{
}

void cg2d::Game::Handle_Events(sf::Event event) {}
void cg2d::Game::Render()
{
    window->draw(*circle);
}
void cg2d::Game::Run()
{
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window->close();
            }
        }

        window->clear();
        this->Update();
        this->Render();
        window->display();
    }
}

bool cg2d::Game::Is_Running()
{
    return window->isOpen();
}

void cg2d::Game::Destroy() {}
cg2d::Game::~Game() {}
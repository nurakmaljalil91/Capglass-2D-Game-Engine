#include "Game.h"

// constructor of the game
cg2d::Game::Game()
{
    std::cout << "The constructor for the game" << std::endl;
}

void cg2d::Game::Create(uint16_t width, uint16_t height, const char *title)
{
    this->width = width;                                                                      // window width
    this->height = height;                                                                    // window height
    window = new sf::RenderWindow(sf::VideoMode({width, height}), title, sf::Style::Default); // create the window
    window->setVerticalSyncEnabled(true);                                                     // make sure the verticla syn between the app and the monitor is sync
    window->setFramerateLimit(60);                                                            // set the fps of the game
    // window->setKeyRepeatEnabled(false);
}

void cg2d::Game::Start()
{

    std::cout << "Game is starting!" << std::endl;
    time = clock.getElapsedTime(); // start the time
    // circle = new sf::CircleShape(100.0f);
    // circle->setFillColor(sf::Color::Green);
    // leave the log here
    // log = new cg2d::Log();
    // log->Create();

    sceneManager.push(new PlayScene(window));
    sceneManager.push(new MenuScene(window));
}

void cg2d::Game::Handle_Events(sf::Event event)
{
    if (!sceneManager.empty())
    {
        sceneManager.top()->Handle_Events(event);
    }
}

void cg2d::Game::Update(sf::Time elapsed)
{
    if (!sceneManager.empty())
    {
        sceneManager.top()->Update(delta_time);

        if (sceneManager.top()->Get_Quit())
        {
            sceneManager.top()->End_Scene();
            delete sceneManager.top();
            sceneManager.pop();
        }
    }
}

void cg2d::Game::Render()
{
    // std::cout << 1.0f/time.asSeconds() << " s" << std::endl;
    // window->draw(*circle);
    if (!sceneManager.empty())
    {
        sceneManager.top()->Render();
    }
}
void cg2d::Game::Run()
{
    while (window->isOpen())
    {
        clock.restart().asSeconds();              // restart the time
        elapsed = clock.restart();                // serve as delta time
        delta_time = clock.restart().asSeconds(); // serve as delta time
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window->close();
            }

            this->Handle_Events(event);
        }

        window->clear(); // clear the window display
        this->Update(elapsed);
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
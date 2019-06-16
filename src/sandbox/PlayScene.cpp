#include "PlayScene.h"

PlayScene::PlayScene(sf::RenderWindow *window) : cg2d::Scene(window)
{
}

void PlayScene::Create(sf::RenderWindow *window)
{
}

void PlayScene::Start()
{
    chicken = new cg2d::Animal({30, 30});
    std::cout << chicken->transform.position.x << std::endl;
    chicken->gameObject.name = "ayam";
    std::cout << chicken->gameObject.name << std::endl;
    delete chicken;

    coordinate_lines = new sf::RectangleShape(sf::Vector2f(0.f, 10.f));
   
    
}

void PlayScene::Handle_Events(sf::Event event)
{
}

void PlayScene::Update(const float &delta_time)
{
    Check_For_Quit();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        std::cout << "S" << std::endl;
    }
}

void PlayScene::Render(sf::RenderTarget &target)
{
   
}

PlayScene::~PlayScene() {}
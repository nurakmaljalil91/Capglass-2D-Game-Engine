#include "PlayScene.h"

PlayScene::PlayScene(sf::RenderWindow *window) : cg2d::Scene(window)
{
}

void PlayScene::Create(sf::RenderWindow *window)
{
}

void PlayScene::Start()
{
    std::cout << "is this working?" <<std::endl;
    player = new cg2d::KinematicObject();
    player->Start({20,30});

    enemy = new cg2d::KinematicObject();
    std::cout << player->Get_Numbers_Of_GameObject() << std::endl;
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

void PlayScene::Render(sf::RenderTarget *target)
{
}

PlayScene::~PlayScene() {}
#include "PlayScene.h"

PlayScene::PlayScene(sf::RenderWindow *window) : cg2d::Scene(window)
{
}

void PlayScene::Create(sf::RenderWindow *window)
{
}

void PlayScene::Start()
{
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
#include "MenuScene.h"

MenuScene::MenuScene(sf::RenderWindow *window) : cg2d::Scene(window)
{
}

void MenuScene::Create(sf::RenderWindow *window) {}
void MenuScene::Start() {}
void MenuScene::Handle_Events(sf::Event event)
{
}
void MenuScene::Update(const float &elapsed)
{
    Check_For_Quit();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        std::cout << "A" << std::endl;
    }
}
void MenuScene::Render(sf::RenderTarget &target) {}

MenuScene::~MenuScene() {}
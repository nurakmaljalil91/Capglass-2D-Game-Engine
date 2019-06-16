#include "Scene.h"

cg2d::Scene::Scene(sf::RenderWindow *window) {}
void cg2d::Scene::Create(sf::RenderWindow *window) {}
void cg2d::Scene::Start() {}
void cg2d::Scene::Update(const float &elapsed) {}
void cg2d::Scene::Handle_Events(sf::Event event) {}
void cg2d::Scene::Render(sf::RenderTarget &target) {}

void cg2d::Scene::End_Scene(){
    quit = true;
}

void cg2d::Scene::Pause_Scene(){
    paused = true;
}

void cg2d::Scene::Resume_Scene(){
    paused = false;
}

void cg2d::Scene::Check_For_Quit() {}
const bool &cg2d::Scene::Get_Quit() const
{
    return quit;
}

cg2d::Scene::~Scene() {}
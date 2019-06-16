#include "Animal.h"

cg2d::Animal::Animal(sf::Vector2f position)
{
    std::printf("Animal is created!");
    gameObject.tag = "default";
    gameObject.name = "default";
    gameObject.layer = 0;
    gameObject.is_active = true;
    transform.position = position;
    transform.size.height = 64;
    transform.size.width = 64;
    transform.size.scale = 1;
}

void cg2d::Animal::Start() {}
void cg2d::Animal::Handle_Events(sf::Event event){}
void cg2d::Animal::Update(const float &delta_time){}
void cg2d::Animal::Render(sf::RenderTarget *target){}

void cg2d::Animal::Transform_Arrow(){
    
}

cg2d::Animal::~Animal(){
    std::printf("Animal is destroyed!");
}
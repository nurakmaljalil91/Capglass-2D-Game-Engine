#include "GameObject.h"

unsigned int cg2d::GameObject::count = 0;

cg2d::GameObject::GameObject()
{
    count++;           // increase number of object created
    position = {0, 0}; //default position is (0,0)
    tag = "default";   // default tag
    name = "default";  // default name
    layer = 0;         // assign to the first layer
    is_active = true;  // object active when created
}

void cg2d::GameObject::Create() {}
void cg2d::GameObject::Start() {}
void cg2d::GameObject::Handle_Events(sf::Event event) {}
void cg2d::GameObject::Update(const float &delta_time) {}
void cg2d::GameObject::Render(sf::RenderTarget *target) {}

void cg2d::GameObject::Destroy() {}
void cg2d::GameObject::Details() {}
const char *cg2d::GameObject::To_String()
{
    return name;
}
void cg2d::GameObject::Set_Active(bool is_active) {}

int cg2d::GameObject::Get_Numbers_Of_GameObject()
{
    return count;
}

cg2d::GameObject::~GameObject() {}
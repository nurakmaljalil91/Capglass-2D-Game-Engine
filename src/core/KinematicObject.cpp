#include "KinematicObject.h"

cg2d::KinematicObject::KinematicObject()
{
    position = {0, 0};                 //default position is (0,0)
    tag = "default kinematic object";  //default tag
    name = "default kinematic object"; //default name
    layer = 0;                         //assign to first layer
    is_active = true;                  //object is active when created
} // default constructor
void cg2d::KinematicObject::Create() {}
void cg2d::KinematicObject::Start(sf::Vector2f position) {
    position = position;
}
void cg2d::KinematicObject::Handle_Events(sf::Event event) {}
void cg2d::KinematicObject::Update(const float &delta_time) {}
void cg2d::KinematicObject::Render(sf::RenderTarget *target) {}

void cg2d::KinematicObject::Destroy() {}
void cg2d::KinematicObject::Details() {}

const char *cg2d::KinematicObject::To_String() {
    return name;
}
void cg2d::KinematicObject::Set_Active(bool is_active) {}
cg2d::KinematicObject::~KinematicObject() {} // default deconstructor
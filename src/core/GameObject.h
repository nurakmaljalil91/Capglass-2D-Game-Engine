#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

namespace cg2d
{
class GameObject
{
protected:
    const char *id; // unique id of the gameobject

    static unsigned int count; // total number of gameobject created in the world

    sf::Vector2f position; //Position of the gameobject in the world

    sf::Vector2i size; //size of the gameobject in term of width and height

public:
    const char *tag; // tag use to search the gameobject

    const char *name; // name use to search the gameoject

    unsigned int layer; // which layer the game

    bool is_active; // check if the gameobject is active

    GameObject();
    

    virtual void Create();
    virtual void Start();
    virtual void Handle_Events(sf::Event event);
    virtual void Update(const float &delta_time);
    virtual void Render(sf::RenderTarget *target);

    virtual void Destroy();
    virtual void Details();
    const char *To_String();
    virtual void Set_Active(bool is_active);

    int Get_Numbers_Of_GameObject();

    virtual ~GameObject();
};

} // namespace cg2d

#endif //OBJECT_H
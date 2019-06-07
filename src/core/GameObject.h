#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

namespace cg2d
{
class GameObject
{
protected:
    const char *id;

    static unsigned int count;

    sf::Vector2f position;

public:
    const char *tag;

    const char *name;

    unsigned int layer;

    bool is_active;

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
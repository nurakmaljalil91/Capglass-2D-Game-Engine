#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

namespace cg2d
{
class GameObject
{
private:
    const char *id;

    static unsigned int count;

    sf::Vector2f position;
    

public:
    const char *tag;

    const char *name;

    unsigned int layer;

    bool is_active;

    GameObject();
    virtual ~GameObject();
    void Create();
    void Start();
    void Update();
    void Render();
    void Destroy();
    void Details();
    const char *To_String();
    void Set_Active(bool is_active);
};

} // namespace cg2d

#endif //OBJECT_H
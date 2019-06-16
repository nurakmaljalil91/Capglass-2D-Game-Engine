#ifndef ANIMAL_H
#define ANIMAL_H

//#include "../core/GameObject.h"
#include <SFML/Graphics.hpp>

namespace cg2d
{
class Animal
{
private:
public:
    struct GameObject
    {
        const char *tag;
        const char *name;
        unsigned int layer;
        bool is_active;
    };

    struct Transform
    {
        struct Size
        {
            unsigned int width;
            unsigned int height;
            unsigned int scale;
        };
        
    public:
        sf::Vector2f position;
        Size size;
    };

    cg2d::Animal::Transform transform;
    cg2d::Animal::GameObject gameObject;

    Animal(sf::Vector2f position);

    // main function
    virtual void Start();
    virtual void Handle_Events(sf::Event event);
    virtual void Update(const float &delta_time);
    virtual void Render(sf::RenderTarget *target);

    void Transform_Arrow();

    ~Animal();
};
} // namespace cg2d
#endif //ANIMAL_H
#ifndef PLAYER_H
#define PLAYER_H

#include "../core/GameObject.h"

namespace cg2d
{
class Player : public GameObject
{
private:
public:
    Player();

    void Create();
    void Start();
    void Handle_Events(sf::Event event);
    void Update(const float & delta_time);
    void Render(sf::RenderTarget *target);

    // Transform properties
    struct Transform
    {
        sf::Vector2f position;
        sf::Vector2i size;
        /* data */
    };
    
    void Set_Position(sf::Vector2f position);
    void Set_Size(unsigned int scale);
    void Set_Width(unsigned int width);
    void Set_Height(unsigned int heught);

    // Sprite properties
    void Set_Image();


    ~Player();
};
} // namespace cg2d

#endif //PLAYER_H
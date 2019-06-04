#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>

namespace cg2d
{
class Game
{
private:
    sf::RenderWindow *window; //window for the game
    sf::Event event; //Game events
    sf::CircleShape *circle;
    sf::Clock clock;
    float delta_time;

public:
    uint16_t width;
    uint16_t height;

    Game();
    //create the game function
    void Create(uint16_t width, uint16_t height, const char* title);
    //Init or start the game
    void Start();
    void Update();
    void Handle_Events(sf::Event event);
    void Render();
    void Run();
    
    bool Is_Running();

    void Destroy();
    virtual ~Game();
};
} // namespace cg2d

#endif
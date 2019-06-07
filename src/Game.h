#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "utils/Log.h"
#include "sandbox/MenuScene.h"
#include "sandbox/PlayScene.h"

namespace cg2d
{
class Game
{
private:
    sf::RenderWindow *window; //window for the game
    sf::Event event; //Game events
    //sf::CircleShape *circle;
    sf::Clock clock; // start the clock
    sf::Time time; // time of the game
    sf::Time elapsed; //act as delta time
    //cg2d::Log *log;
    float delta_time;
    std::stack<cg2d::Scene*>sceneManager;

public:
    uint16_t width; // width of the window
    uint16_t height; // height of the window

    Game();
    //create the game function
    void Create(uint16_t width, uint16_t height, const char* title);
    //Init or start the game
    void Start();
    void Handle_Events(sf::Event event);
    void Update(sf::Time elapsed);
    void Render();
    void Run();
    
    bool Is_Running();

    void Destroy();
    virtual ~Game();
};
} // namespace cg2d

#endif
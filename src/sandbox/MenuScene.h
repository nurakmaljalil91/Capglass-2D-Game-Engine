#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "../core/Scene.h"
#include <iostream>

class MenuScene : public cg2d::Scene
{
private:
public:
    MenuScene(sf::RenderWindow *window);

    void Create(sf::RenderWindow *window);
    void Start();
    void Handle_Events(sf::Event event);
    void Update(const float &elapsed);
    void Render(sf::RenderTarget *target);

    ~MenuScene();
};

#endif //MENUSCENE
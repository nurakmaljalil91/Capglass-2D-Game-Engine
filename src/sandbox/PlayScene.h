#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include "../core/Scene.h"

class PlayScene : public cg2d::Scene
{
private:
public:
    PlayScene(sf::RenderWindow * window);

    void Create(sf::RenderWindow * window);
    void Start();
    void Handle_Events(sf::Event event);
    void Update(const float &delta_time);
    void Render(sf::RenderTarget *target);
    ~PlayScene();

};
#endif //PLAYSCENE_H
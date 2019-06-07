#ifndef SCENE_H
#define SCENE_H

#include <SFML/Graphics.hpp>
#include <stack>
#include <iostream>

namespace cg2d
{
class Scene
{
private:
    sf::RenderWindow *window;
    bool quit;
    bool paused;

protected:
    int id;
    int tag;
    const char *name;

public:
    Scene(sf::RenderWindow *window);
    virtual void Create(sf::RenderWindow *window);
    virtual void Start();
    virtual void Update(const float &elapsed) = 0;
    virtual void Handle_Events(sf::Event event) = 0;
    virtual void Render(sf::RenderTarget *target = nullptr) = 0;

    void End_Scene();
    void Pause_Scene();
    void Resume_Scene();

    virtual void Check_For_Quit();
    const bool &Get_Quit() const;

    virtual ~Scene();
};
} // namespace cg2d

#endif //SCENE_H
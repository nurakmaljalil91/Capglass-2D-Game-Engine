#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <SFML/Graphics.hpp>

namespace cg2d
{
class SceneManager
{
private:
public:
    SceneManager();

    void Create(sf::RenderWindow *window);
    void Start();
    void Update(const float &elapsed);
    void Handle_Inputs(sf::Event event);
    void Render(sf::RenderTarget *target = nullptr);
    ~SceneManager();
};
} // namespace cg2d
#endif //SCENEMANAGER_H
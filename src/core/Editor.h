#ifndef EDITOR_H
#define EDITOR_H

#include <SFML/Graphics.hpp>

namespace cg2d
{
class Editor
{
private:
    // sf::Vertex line[]= {
    //     sf::Vertex(sf::Vector2f(10,10)),
    //     sf::Vertex(sf::Vector2f(140,50))
    // };
public:
    Editor();
    ~Editor();
    void Show_Grid();
    void Render(sf::RenderTarget &target);

};
} // namespace cg2d
#endif //EDITOR_H
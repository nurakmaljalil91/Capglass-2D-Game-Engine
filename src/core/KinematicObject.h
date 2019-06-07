#ifndef KINEMATICOBJECT_H
#define KINEMATICOBJECT_H

#include "GameObject.h"

namespace cg2d
{
class KinematicObject : public cg2d::GameObject
{
private:
public:
    KinematicObject(); // default constructor
    void Create();
    void Start(sf::Vector2f position);
    void Handle_Events(sf::Event event);
    void Update(const float &delta_time);
    void Render(sf::RenderTarget *target);

    void Destroy();
    void Details();
    
    const char *To_String();
    void Set_Active(bool is_active);
    ~KinematicObject(); // default deconstructor
};
} // namespace cg2d

#endif //KINEMATICOBJECT_H
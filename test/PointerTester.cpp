#include <iostream>
#include <memory>

class Entity
{
private:
    const char *name;

public:
    Entity(const char *name)
    {
        name = name;
        std::cout << name << " is created" << std::endl;
    }
    ~Entity()
    {
        std::cout << name << " is destroyed" << std::endl;
    }
    void prinft(){
        std::cout << "this is testing" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    std::unique_ptr<Entity> entity01 = std::make_unique<Entity>("sd");
    entity01->prinft();
    entity01.reset();
    return 0;
}

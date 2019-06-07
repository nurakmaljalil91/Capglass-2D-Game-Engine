#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

namespace cg2d
{
class GameManager
{
private:
    static GameManager *instance;
    int data;

    GameManager();

public:
    
    ~GameManager();
};
} // namespace cg2d
#endif //GAMEMANAGER_H
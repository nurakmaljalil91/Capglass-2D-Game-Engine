#include <iostream>
#include "wtypes.h"
#include "Game.h"
#include "utils/Log.h"
#include <memory>

// Dev Note : get window size : https://stackoverflow.com/questions/8690619/how-to-get-screen-resolution-in-c
// Get the horizontal and vertical screen sizes in pixel
void GetDesktopResolution(int &horizontal, int &vertical)
{
    RECT desktop;
    // Get a handle to the desktop window
    const HWND hDesktop = GetDesktopWindow();
    // Get the size of screen to the variable desktop
    GetWindowRect(hDesktop, &desktop);
    // The top left corner will have coordinates (0,0)
    // and the bottom right corner will have coordinates
    // (horizontal, vertical)
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

int main(int argc, char const *argv[])
{
    /* code */

    cg2d::Log log;
    log.Create();
    std::cout << "Hello Game" << std::endl;
    int horizontal = 0;
    int vertical = 0;
    GetDesktopResolution(horizontal, vertical);
    std::unique_ptr<cg2d::Game> game = std::make_unique<cg2d::Game>();
    //game = new cg2d::Game();
    game->Create(horizontal, vertical, "Capglass 2D Game Engine");

    game->Start();

    game->Run();

    game->~Game();
    return 0;
}

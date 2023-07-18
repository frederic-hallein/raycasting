#pragma once

#include <SDL2/SDL.h>
#include <vector>

#include "headers/Player.hpp"
#include "headers/Map.hpp"
#include "headers/Ray.hpp"

class Game {  
public:
    Game();
    ~Game();

    void init(const char* title, int SCREEN_WIDTH, int SCREEN_HEIGHT);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();


private:
    int w;
    int h;
    bool is_running = true;   
    SDL_Window* window;
    SDL_Renderer* renderer;

    Player player;
    Map map;
    std::vector<Ray> rays;


};

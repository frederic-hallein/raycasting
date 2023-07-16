#pragma once

#include <SDL2/SDL.h>

class Game {  
public:
    Game();
    ~Game();

    void init(const char* title, int SCREEN_WIDTH, int SCREEN_HEIGHT);
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() {return is_running;}
private:
    bool is_running = true;
    SDL_Window* window;
    SDL_Renderer* renderer;
};

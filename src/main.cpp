#define SDL_MAIN_HANDLED

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "headers/Game.hpp"

// screen size
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int main(int argc, char* argv[]){
    Game game;
    game.init("Wolfenstein 3D", SCREEN_WIDTH, SCREEN_HEIGHT);

    while (game.running()){ 
        game.handleEvents();
        game.update();
        game.render();
    
    
        //player.printPlayerInfo();
    }

    

    game.clean();
    
    return 0;
}
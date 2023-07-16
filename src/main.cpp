#define SDL_MAIN_HANDLED

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "headers/Game.hpp"
#include "headers/Player.hpp"
#include "headers/Ray.hpp"
#include "headers/Map.hpp"

// screen size
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;


int main(int argc, char* argv[]){
    Game game;
    game.init("Wolfenstein 3D", SCREEN_WIDTH, SCREEN_HEIGHT);

    Map map;

    // initial starting values of player
    double start_x_pos = 6;
    double start_y_pos = 5;
    double start_x_dir = -1;
    double start_y_dir = 0;
    double start_x_plane = 0;
    double start_y_plane = 0.66;

    
    Player player(start_x_pos, start_y_pos, start_x_dir, start_y_dir, start_x_plane, start_y_plane);
    map.setPlayerPosition(start_x_pos, start_y_pos);
    
    Ray rays[SCREEN_WIDTH];     
    for (int x = 0; x < SCREEN_WIDTH; x++)
    {
        rays[x].setXCamera(x, SCREEN_WIDTH);
    }


    while (game.running()){   
        game.handleEvents();
        game.update();
        game.render();

        

        //player.printPlayerInfo();


    }

    game.clean();
    
    return 0;
}
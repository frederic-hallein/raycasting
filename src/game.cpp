#include <iostream>

#include "headers/Game.hpp"

Game::Game() {}

Game::~Game() {}

void Game::init(const char* title, int SCREEN_WIDTH, int SCREEN_HEIGHT)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0){
        std::cout << "SDL_Init has failed." << std::endl;
        std::cout << "Error:" << SDL_GetError() << std::endl; 
    }

    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL){
        std::cout << "Could not create window." << std::endl;
        std::cout << "Error: " << SDL_GetError() <<std::endl;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL){
        std::cout << "Could not create renderer." << std::endl;
        std::cout << "Error: " << SDL_GetError() <<std::endl;
    }
}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type){
        case SDL_QUIT:
            is_running = false;   
            break;
        
        default:
            break;
    }
}

void Game::update()
{

}

void Game::render()
{
    // color background
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
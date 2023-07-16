#include "headers/Map.hpp"

Map::Map() {}

Map::~Map() {}


int Map::setPlayerPosition(double x_pos, double y_pos) 
{
    x_map = (int)x_pos;
    y_map = (int)y_pos;
    map_grid[x_map][y_map] = 2; // TODO: Update position when moving player
}


int Map::getValue() {return map_grid[x_map][y_map];} 
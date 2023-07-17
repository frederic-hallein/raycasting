#include "headers/Map.hpp"

Map::Map() {}

Map::~Map() {}


void Map::setMapPos(double x_pos, double y_pos) 
{
    x_map = (int)x_pos;
    y_map = (int)y_pos;
    // map_grid[x_map][y_map] = 2; // TODO: Update position when moving player
}

int Map::getXMap() {return x_map;}
int Map::getYMap() {return y_map;}


int Map::getValue(int p_x_map, int p_y_map) {return map_grid[p_x_map][p_y_map];} 
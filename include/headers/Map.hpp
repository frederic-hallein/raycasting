#pragma once

const int MAP_WIDTH = 10;
const int MAP_HEIGHT = 10;

class Map {
public:
    Map();
    ~Map();

    int setPlayerPosition(double x_pos, double y_pos);
    int getValue();
private:
    int map_grid[MAP_WIDTH][MAP_HEIGHT] =
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    int x_map;
    int y_map;
};
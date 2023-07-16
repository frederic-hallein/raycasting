#include <math.h>

#include "headers/Ray.hpp"


Ray::Ray() {}

Ray::~Ray() {}

void Ray::setXCamera(int x_pos_camera_space, int SCREEN_WIDTH) {x_camera = 2 * x_pos_camera_space / (double)SCREEN_WIDTH - 1;}
void Ray::setXDir(double player_x_dir, double x_plane, double x_camera) {ray_x_dir = player_x_dir + x_plane * x_camera;}
void Ray::setYDir(double player_y_dir, double y_plane, double x_camera) {ray_y_dir = player_y_dir + y_plane * x_camera;}
void Ray::setDeltaXDist() {delta_x_dist = std::fabs(1 / ray_x_dir);}
void Ray::setDeltaYDist() {delta_y_dist = std::fabs(1 / ray_y_dir);}

void Ray::calculateStep(double player_x_pos, double player_y_pos, int x_map, int y_map)
{
    if (ray_x_dir < 0)
    {
        step_x = -1;
        side_x_dist = (player_x_pos - x_map) * delta_x_dist;
    }
    else
    {
        step_x = 1;
        side_x_dist = (x_map + 1.0 - player_x_pos) * delta_x_dist;
    }


    if (ray_y_dir < 0)
    {
        step_y= -1;
        side_y_dist = (player_y_pos - y_map) * delta_y_dist;
    }
    else
    {
        step_y = 1;
        side_y_dist = (y_map + 1.0 - player_y_pos) * delta_y_dist;
    }
}

double Ray::getXCamera() {return x_camera;}
double Ray::getXDir() {return ray_x_dir;}
double Ray::getYDir() {return ray_y_dir;}
double Ray::getSideXDist() {return side_x_dist;}
double Ray::getSideYDist() {return side_y_dist;}
double Ray::getDeltaXDist() {return delta_x_dist;}
double Ray::getDeltaYDist() {return delta_y_dist;}










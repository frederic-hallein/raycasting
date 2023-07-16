#include <iostream>

#include "headers/Player.hpp"

Player::Player(double x_pos, double y_pos, double x_dir, double y_dir, double x_plane, double y_plane)
{
    this->x_pos = x_pos;
    this->y_pos = y_pos;
    this->x_dir = x_dir;
    this->y_dir = y_dir;
    this->x_plane = x_plane;
    this->y_plane = y_plane; 
}

Player::~Player() {}

void Player::printPlayerInfo()
{
    std::cout << "(" << x_pos << ", " << y_pos << ")" << ", ";
    std::cout << "(" << x_dir << ", " << y_dir << ")" << ", ";
    std::cout << "(" << x_plane << ", " << y_plane << ")" << std::endl;
}

void Player::update()
{
    
}

double Player::getXPos() {return x_pos;}
double Player::getYPos() {return y_pos;}
double Player::getXDir() {return x_dir;}
double Player::getYDir() {return y_dir;}
double Player::getXPlane() {return x_plane;}
double Player::getYPlane() {return y_plane;}










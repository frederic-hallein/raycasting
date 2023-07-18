#include <iostream>

#include "headers/Player.hpp"

Player::Player() {}

Player::~Player() {}

void Player::printPlayerInfo()
{
    std::cout << "(" << x_pos << ", " << y_pos << ")" << ", ";
    std::cout << "(" << x_dir << ", " << y_dir << ")" << ", ";
    std::cout << "(" << x_plane << ", " << y_plane << ")" << std::endl;
}

void Player::update()
{
    x_pos -= 0.001; //TOD character constroller
}


double Player::getXPos() {return x_pos;}
double Player::getYPos() {return y_pos;}
double Player::getXDir() {return x_dir;}
double Player::getYDir() {return y_dir;}
double Player::getXPlane() {return x_plane;}
double Player::getYPlane() {return y_plane;}










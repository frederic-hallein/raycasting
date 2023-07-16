#pragma once

class Player {
public:
    Player(double x_pos, double y_pos, double x_dir, double y_dir, double x_plane, double y_plane);
    ~Player();

    void printPlayerInfo();
    void update();
    
    double getXPos();
    double getYPos();
    double getXDir();
    double getYDir();
    double getXPlane();
    double getYPlane();
    


private:
    double x_pos;
    double y_pos;
    double x_dir;
    double y_dir;
    double x_plane;
    double y_plane;
};
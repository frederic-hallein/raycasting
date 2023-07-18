#pragma once

class Player {
public:
    Player();
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
    double x_pos = 22;
    double y_pos = 12;
    double x_dir = -1;
    double y_dir = 0;
    double x_plane = 0;
    double y_plane = 0.66;
};
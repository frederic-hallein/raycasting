#pragma once

class Ray {
public:
    Ray();
    ~Ray();

    void setXCamera(int x_pos_camera_space, int SCREEN_WIDTH);
    void setXDir(double player_x_dir, double x_plane, double x_camera);
    void setYDir(double player_y_dir, double y_plane, double x_camera);
    void setDeltaXDist();
    void setDeltaYDist();
    void calculateStep(double player_x_pos, double player_y_pos, int x_map, int y_map);

    double getXCamera();
    double getXDir();
    double getYDir();
    double getSideXDist();
    double getSideYDist();
    double getDeltaXDist();
    double getDeltaYDist();
private:
    double x_camera;
    double ray_x_dir;
    double ray_y_dir;
    double side_x_dist;
    double side_y_dist;
    double delta_x_dist;
    double delta_y_dist;
    double step_x;
    double step_y;

    int hit = 0;
    int side;

};
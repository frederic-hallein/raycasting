#pragma once

class Timer{
public:
    Timer();
    ~Timer();
    
    double FPS();
private:
    double time = 0; //time of current frame
    double old_time = 0; //time of previous frame
};
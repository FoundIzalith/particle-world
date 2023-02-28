#include <iostream>

#ifndef EVA_PARTICLEWORLD_PARTICLE
#define EVA_PARTICLEWORLD_PARTICLE

class particle {
public:
    particle();
    particle(const &particle);
    particle(int R, int G, int B, int x, int y);
    ~particle();

    void getColor(int &R, int &G, int &B);
    int getAbsolute;
    void getPos(int &x, int &y);

    void setColor(int R, int G, int B);
    void setPos(int x, int y);

    void update(); //Update pos and velocity
    

private:
    int R, G, B;
    int absolute; //R + G + B / 3
    int x, y;
    int vel_x, vel_y;
    int aoi; //Area of influence
}

#endif
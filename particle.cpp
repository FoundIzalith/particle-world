#include <iostream>
#include "particle.hpp"

particle::particle() {
    R = G = B = 255;
    absolute = 255;
    x = y = 0;
    vel_x = vel_y = 0;
    aoi = 100;
}

particle::particle(const particle& copy) {
    R = copy.R;
    G = copy.G;
    B = copy.B;

    x = copy.x;
    y = copy.y;

    vel_x = copy.vel_x;
    vel_y = copy.vel_y;

    int aoi = copy.aoi;
}

particle::particle(int nR, int nG, int nB, int nX, int nY, int nVX, int nVY, int naoi) {
    R = nR;
    G = nG;
    B = nB;

    absolute = (R + G + B)/3;

    x = nX;
    y = nY;

    vel_x = nVX;
    vel_y = nVY:

    aoi = naoi;
}

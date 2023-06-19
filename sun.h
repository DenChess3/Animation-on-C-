#ifndef sun_H
#define sun_H
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
#include "figure.h"

class Sun: public Figure {
    int r;
    int count;
    bool goright;
    public:
    Sun(int r0, int x0, int y0);
    void move();
};

#endif
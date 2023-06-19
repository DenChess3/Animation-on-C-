#ifndef road_H
#define road_H
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
#include "figure.h"

class Road: public Figure {
    public:
    Road(int x0, int y0);
    void move();
};

#endif
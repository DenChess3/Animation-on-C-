#ifndef background_H
#define background_H
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
#include "figure.h"

class Background: public Figure {
	public:
	Background();
	void move() {};
};
#endif
#ifndef scene_H
#define scene_H
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
#include <FL/Fl.H>
#include "figure.h"
#include "background.h"
#include "sun.h"
#include "road.h"
class Scene: public Fl_Box {
	int n = 3; // number of object
	Figure** obj;
	static void timerhandler(void *data);
	public:
	Scene(int w, int h);
	void draw();
	void move();
};

#endif

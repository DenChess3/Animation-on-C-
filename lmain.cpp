#include <iostream>
#include <FL/Fl_Window.H>
#include <FL/Fl.H>
#include "scene.h"
using namespace std;

int main(){
	const int width = 1200, height = 900;
	Fl_Window* window = new Fl_Window(width, height);
	window->begin();
	//fl_color(FL_FOREGROUND_COLOR);
	Scene* scene = new Scene(width, height);
	//scene->redraw();
	//fl_draw_box(FL_FLAT_BOX, 0, 0, width, height, FL_MAGENTA);
	window->end();
	window->show();
	Fl::run();
	return 0;
}

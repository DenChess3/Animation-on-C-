#include "scene.h"
Scene:: Scene(int w, int h): Fl_Box(FL_FLAT_BOX, 0, 0, w, h, nullptr) {
	//first = new Rlt(700, 200, 330, 100, 698, 202);
	obj = new Figure* [n];
	Background* back = new Background();
	obj[0] = back;
	Sun* sun = new Sun(100, 1100, 150);
	obj[1] = sun;
	Road* road = new Road(0, 700);
	obj[2] = road;
	Fl::add_timeout(0.1, timerhandler, this);
}

void Scene:: draw() {
	//Fl_Box::draw();
	//obj[0]->draw();
	//obj[1]->draw();
	for (int i = 0; i < n; i++)
		obj[i]->draw();


	
	//fl_line(x0, y0, x0 + 100, y0 + 100);
	//fl_polygon(50, 50, 100, 100, 25, 40);
}  

void Scene:: timerhandler(void* data) {
	Scene* handler = (Scene*) data;
	handler->move();
	handler->redraw();
	Fl::repeat_timeout(0.1, timerhandler, data);
}

void Scene:: move() {
	//obj[0]->move();
	//obj[1]->move();
	for (int i = 0; i < n; i++)
		obj[i]->move();
	//obj[1]->move();
}
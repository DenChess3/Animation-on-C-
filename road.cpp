#include "road.h"

Road:: Road(int x0, int y0): Figure(5, x0, y0) {
    Rlt* road = new Rlt(0, 0, 1200, 0, 1200, 150, 0, 150, FL_GRAY);
	arr[0] = road;
	for (int i = 0; i < n - 1; i++) {
	Line* line = new Line(50 + 350 * i, 50, 50 + 150 + 350 * i, 50, 50 + 150 + 50 + 350 * i, 80, 50 + 50 + 350 * i, 80, FL_WHITE );
		arr[i + 1] = line;
	}
}

void Road:: move() {
    /*
    if (y % 2)  // this piece of code shows the independence of the movement of roads and lines
        y += 1;
    else 
        y -= 1;
    */
    
    for (int i = 1; i < n; i++) {
        arr[i]->move(-20, 0);
    }
}

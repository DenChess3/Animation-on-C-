#include "background.h"
Background:: Background(): Figure(2) {
	/*
	Rlt* down = new Rlt(0, 600, 1200, 600, 1200, 900, 0, 900, FL_GREEN);
	*arr[0] = down;
	Rlt* sky = new Rlt(0, 0, 1200, 0, 1200, 600, 0, 600, FL_BLUE);
	*arr[1] = sky;
	*/
	Rlt* down = new Rlt(0, 600, 1200, 600, 1200, 900, 0, 900, FL_GREEN);
	arr[0] = down;
	Rlt* sky = new Rlt(0, 0, 1200, 0, 1200, 600, 0, 600, FL_BLUE);

	arr[1] = sky;

}


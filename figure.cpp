#include "figure.h"
#include <cmath>
#include <iostream>
Round:: Round(int x0, int y0, int r10, int r20, Fl_Color col0): 
	SimpleFigure(),
	x(x0),
	y(y0),
	r1(r10),
	r2(r20),
	col(col0) {
}

void Round:: draw(int xp, int yp) {
	fl_color(col);
	fl_pie(xp + x - r1 / 2, yp + y - r2 / 2, r1, r2, 0, 360);
	/*fl_pie(x0 + x - r, y0 + y, 2 * r, 2 * r, 0, 360);
	fl_pie(x0 + x + 2*r - r, y0 + y, 2 * r, 2 * r, 0, 360);
	fl_polygon(x0 + x, y0 + y + r, x0 + x + 2*r, y0 + y + r,x0 + x + 2*r, y0 + y + r + 250, x0 + x, y0 + y + r + 250);
	fl_pie(x0 + x, y0 + y  +250, 2 * r, 2 * r, 0, 360);*/
}

void Round:: move(int dirx, int diry, int k1, int k, int r, int i) {
	x += dirx;
	y += diry;
}

Rlt:: Rlt(int x10, int y10, int x20, int y20, int x30, int y30, int x40, int y40, Fl_Color col0):
	SimpleFigure(),
	x1(x10),
	y1(y10),
	x2(x20),
	y2(y20),
	x3(x30),
	y3(y30),
	x4(x40),
	y4(y40),
	col(col0) {
}

Line:: Line(int x10, int y10, int x20, int y20, int x30, int y30, int x40, int y40, Fl_Color col0):
	SimpleFigure(),
	x1(x10),
	y1(y10),
	x2(x20),
	y2(y20),
	x3(x30),
	y3(y30),
	x4(x40),
	y4(y40),
	col(col0) {
}

Ray:: Ray(int x10, int y10, int x20, int y20, Fl_Color col0):
	SimpleFigure(),
	x1(x10),
	y1(y10),
	x2(x20),
	y2(y20),
	col(col0) {
}

void Rlt:: draw(int xp, int yp) {
	fl_color(col);
	if (x3 == -1) 
		fl_line(xp + x1,yp + y1, xp + x2,yp + y2);
	else if (x4 == -1)
			fl_polygon(xp + x1, yp + y1, xp + x2, yp + y2, xp + x3, yp + y3);
		else
			fl_polygon(xp + x1, yp + y1, xp + x2, yp + y2, xp + x3, yp + y3, xp + x4, yp + y4);
}

void Line:: draw(int xp, int yp) {
	fl_color(col);
	fl_polygon(xp + x1, yp + y1, xp + x2, yp + y2, xp + x3, yp + y3, xp + x4, yp + y4);
}

void Ray:: draw(int xp, int yp) {
	fl_color(col);
	fl_line(xp + x1,yp + y1, xp + x2,yp + y2);
}

void Rlt:: move(int dirx, int diry, int k1, int k, int r, int i) {
	x1 += dirx;
	y1 += diry;
	x2 += dirx;
	y2 += diry;
	x3 += dirx;
	y3 += diry;
	x4 += dirx;
	y4 += diry;
}

void Ray:: move(int dirx, int diry, int k1, int k, int r, int i) {
	const double pi = acos(-1.0);
	int t = 72;
	int x2old = x2;
	int y2old = y2;

	//x2 = r * cos(2*pi/k * i + 2*pi/t);
	//y2 = r * sin(2*pi/k * i + 2*pi/t);
	x2 = x2old * cos(2*pi/t) - y2old * sin(2*pi/t);
	y2 = x2old * sin(2*pi/t) + y2old * cos(2*pi/t);
	if (k1 == 3) {
		x2 = r * cos(2*pi/k * i);
		y2 = r * sin(2*pi/k * i);
	}
}

void Line:: move(int dirx, int diry, int k1, int k, int r, int i) {
	x1 += dirx;
	y1 += diry;
	x2 += dirx;
	y2 += diry;
	x3 += dirx;
	y3 += diry;
	x4 += dirx;
	y4 += diry;

	if (x3 <= 0) {
		x1 = 1200;
		y1 = 50;
		x2 = 1350;
		y2 = 50;
		x3 = 1350 + 50;
		y3 = 80;
		x4 = 1200 + 50;
		y4 = 80;
	}
}

Figure:: Figure(int n0, int x0, int y0): n(n0), x(x0), y(y0) {
	arr = new SimpleFigure* [n0];
}

void Figure:: draw() {
	for(int i = 0; i < n; i++)
		arr[i]->draw(x, y);
}

/*void Figure:: move() {
	for (int i = 0; i < n; i++)
		arr[i]->move();
}*/

/*void Figure:: draw() {
	for (int i = 0; i < n; i++) {
		arr[i]->draw();
	};
}*/



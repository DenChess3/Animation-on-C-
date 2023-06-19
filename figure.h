#ifndef figure_H
#define figure_H
#include <FL/fl_draw.H>
#include <iostream>

class SimpleFigure {
  public:
	SimpleFigure() {};
	virtual void draw(int x, int y) = 0;
	virtual void move(int dirx, int diry, int k1 = 0, int k = 0, int r = 0, int i = 0) = 0;
};

class Figure {
  protected:
	int x, y;
	int n; // number of simple figure
	SimpleFigure** arr;
  public:
	Figure(int n0 = 5, int x0 = 0, int y0 = 0);
	void draw();
	virtual void move() = 0;
};

class Round: public SimpleFigure {
  protected:
	int x, y;
	int r1, r2;
	Fl_Color col;
  public:
	Round(int x0, int y0, int r10, int r20, Fl_Color col0 = FL_BLACK);
	void draw(int xp, int yp);
	void move(int dirx, int diry, int k1 = 0, int k = 0, int r = 0, int i = 0);
};

class Rlt: public SimpleFigure { // rectangle, line or triangle
  protected:
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	Fl_Color col;
  public:
	Rlt(int x10, int y10, int x20, int y20, int x30 = -1, int y30 = -1, int x40 = -1, int y40 = -1, Fl_Color col0 = FL_BLACK);
	void draw(int xp, int yp);
	void move(int dirx, int diry, int k1 = 0, int k = 0, int r = 0, int i = 0);
};


class Line: public SimpleFigure {
  protected:
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	Fl_Color col;
  public:
	Line(int x10, int y10, int x20, int y20, int x30, int y30, int x40, int y40, Fl_Color col0 = FL_BLACK);
	void draw(int xp, int yp);
	void move(int dirx, int diry,int k1 = 0, int k = 0, int r = 0, int i = 0);
};

class Ray: public SimpleFigure {
  protected:
	int x1, y1;
	int x2, y2;
	Fl_Color col;
  public:
	Ray(int x10, int y10, int x20, int y20, Fl_Color col0 = FL_YELLOW);
	void draw(int xp, int yp);
	void move(int dirx, int diry, int k1 = 0, int k = 0, int r = 0, int i = 0);
};

#endif /* figure_H */

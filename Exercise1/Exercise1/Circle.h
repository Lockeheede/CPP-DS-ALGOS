#pragma once
#include "Point.h"
class Circle {
private:
	int radius;
	Point center;
public:
	Circle();
	Circle(int radius, Point center);
	int getRadius();
	Point getCenter();
	void setRadius(int radius);
};
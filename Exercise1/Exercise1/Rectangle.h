#pragma once
class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int width, int height);
	int getWidth();
	int getHeight();
	void setWidth(int width);
	void setHeight(int height);
	double area();
};
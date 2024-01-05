// This book already has issues from what I'm seeing...
//

#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Student.h"
#include "Circle.h"

int main()
{
	Rectangle myRectangle(57, 32);
	double rectArea = myRectangle.area();
	std::cout << rectArea << std::endl;
}

Rectangle::Rectangle() {
	width = getWidth();
	height = getHeight();
}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;

}

int Rectangle::getHeight() {
	return height;
}

int Rectangle::getWidth() {
	return width;
}

void Rectangle::setHeight(int height) {
	this->height = height;
}

void Rectangle::setWidth(int width) {
	this->width = width;
}

double Rectangle::area() {
	return width * height;
}

Student::Student() {
	name = getName();
	age = getAge();
	grade = getGrade();
}

Student::Student(std::string name, int age, float grade)
{
	this->name = name;
	this->age = age;
	this->grade = grade;
}

std::string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

float Student::getGrade()
{
	return grade;
}

void Student::setGrade(float grade)
{
	this->grade = grade;
}

float Student::getAverageGrade() {
	return grade / age;
}

Point::Point() {
	x = getX();
	y = getY();
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

Circle::Circle() {
	radius = getRadius();
	center = getCenter();
}

Circle::Circle(int radius, Point center) {
	this->radius = radius;
	this->center = center;
}

int Circle::getRadius() {
	return radius;
}

Point Circle::getCenter() {
	return center;
}

void Circle::setRadius(int radius) {
	this->radius = radius;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

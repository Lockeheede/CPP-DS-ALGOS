#pragma once

#include <string>

class Student {
private:
	std::string name;
	int age;
	float grade;
public:
	Student();
	Student(std::string name, int age, float grade);
	std::string getName();
	int getAge();
	float getGrade();
	void setGrade(float grade);
	float getAverageGrade();
};
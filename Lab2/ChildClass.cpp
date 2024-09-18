/*
Cole Fortune
Computer Science Fall 2024
Due: Sept. 17, 2024
Lab 2, Lab 2 Exploring Output and Classes
This lab is designed to get you familiar output to the command prompt
using C++. You are to create a cylinder object (Class) that stores radius and height. The
class should include methods for calculating volume and surface area. Other methods
included should be get and set functions. In main.cpp, you should test the class with
hard coded values and output radius, height, volume and surface area of the cylinder
*/

#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder() { // constructor giving values to private class
	radius = 5.00;
		height= 10.00;
}
Cylinder::~Cylinder() {// deconstructor

}

void Cylinder::setRadius(float r) {// setting value for radius variable
radius:r;
}

float Cylinder::getRadius() {// getting value of radius = 5
	return radius;
}

void Cylinder::setHeight(float h) {// setting value for height variable
height:h;
}

float Cylinder::getHeight() {// getting value of height = 10
	return height;
}

float Cylinder::calcVolume() {// calculating value for volume of a cylinder - Formula: πr^2h
	return pi * pow(radius,2.00) * height;
}

float Cylinder::calcSurfArea() {// calculating value for surface area of a cylinder - Formula: 2πrh+2πr^2
	return (2.00 * pi * radius * height) + (2.00 * pi * pow(radius, 2.00));
}

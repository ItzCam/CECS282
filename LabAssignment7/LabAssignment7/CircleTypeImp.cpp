//Antonio Hughes
//Lab Assignment 7

//Implementation file circleTypeImp.cpp
#include <stdio.h>
#include <iostream>
#include "CircleType.h"

using namespace std;

void circleType::print() const
{
cout << "Center: ";
PointType::print();
cout << endl;

cout << "Radius: " << radius << endl;
cout << "Circumference: " << getCircumference() << endl;
cout << "Area: " << getArea() << endl;
}

void circleType::setRadius(double r)
{
radius = r;
}

double circleType::getRadius() const
{
return radius;
}

double circleType::getCircumference() const
{
return (2 * 3.1416 * radius);
}

double circleType::getArea() const
{
return (3.1416 * radius * radius);
}

circleType::circleType(double x, double y, double r)
:PointType(x,y)
{
radius = r;
}

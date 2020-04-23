//Antonio Hughes
//Lab Assignment 7

//Implementation File pointTypeImp.cpp

#include <stdio.h>
#include <iostream>
#include "PointType.h"

using namespace std;

void PointType::setPoint(double x, double y)
{
xCoordinate = x;
yCoordinate = y;
}

void PointType::print() const
{
cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double PointType::getX() const
{
return xCoordinate;
}

double PointType::getY() const
{
return yCoordinate;
}

PointType::PointType(double x, double y)
{
xCoordinate = x;
yCoordinate = y;
}

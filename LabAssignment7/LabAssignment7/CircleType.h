//Antonio Hughes
//Lab Assignment 7

//Class circleType

#ifndef H_CircleType
#define H_CircleType

#include "PointType.h"

class circleType: public PointType
{
public:
void print() const;
void setRadius(double r);
double getRadius() const;
double getCircumference() const;
double getArea() const;
circleType(double x = 0.0, double y = 0.0, double r = 0.0);

protected:
double radius;
};

#endif

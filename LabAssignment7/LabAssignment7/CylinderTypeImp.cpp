//Antonio Hughes
//Lab Assignment 7

#include <stdio.h>
#include <iostream>
#include "CylinderType.h"
using namespace std;
void cylinderType::print() const{
       cout << "Base Center: ";
       PointType::print();
       cout << "Base Radius: " << radius << endl;
       cout << "Base Circumference: " << getCircumference() << endl;
       cout << "Base Area: " << getArea() << endl;
       cout << "Cylinder height : " << getHeight() << endl;
       cout << "Cylinder surface area: " << getSurfaceArea() << endl;
       cout << "Cylinder volume : " << getVolume() << endl;

}

void cylinderType::setHeight(double h){
   height = h;
}
void cylinderType::setBaseCenter(double x, double y){
   setPoint(x,y);
}
void cylinderType::setCenterRadiusHeight(double x, double y,
       double r, double h){
   setPoint(x,y);
   setRadius(r);
   setHeight(h);
}

double cylinderType::getHeight() const{
   return height;
}
double cylinderType::getVolume() const{
   return 3.1416 * getRadius()*getRadius()*height;
}
double cylinderType::getSurfaceArea() const{
   return getCircumference()*(getHeight()+getRadius());
}
cylinderType::cylinderType(double x, double y ,double r , double h):circleType(x,y,r){
   setHeight(h);
}


//Antonio Hughes
//Lab Assignment 7

#ifndef H_PointType
#define H_PointType

class PointType{
    
public:
    void setPoint(double x, double y);
    void print() const;
    double getX() const;
    double getY() const;
    PointType(double x = 0.0, double y = 0.0);

protected:
    double xCoordinate;
    double yCoordinate;
};

#endif

#pragma once
#include <iostream>
#include "point.h"

enum Color{
    red,
    blue,
    green,
    none
};

class Figure {
    Point center;
    Color color;
public:
    Figure(Point c);
    virtual std::string getColor();
    virtual void setColor(Color newColor);
    virtual void setCenter(Point newCenter);
    virtual Point getCenter();
    virtual void boundingBox() = 0;
    virtual double area() = 0;
};
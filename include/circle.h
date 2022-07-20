#pragma once
#include "figure.h"

class Circle: public Figure {
    double radius;
public:
    Circle(Point newCenter, double newRadius);
    double area() override;
    void boundingBox() override;
};
#pragma once
#include "figure.h"

class Triangle: public Figure {
    double sideLength;
public:
    Triangle(Point newCenter, double newSideLength);
    double area() override;
    void boundingBox() override;
};
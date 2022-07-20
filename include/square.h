#pragma once
#include "figure.h"

class Square: public Figure {
    double sideLength;
public:
    Square(Point newCenter, double newSideLength);
    double area() override;
    void boundingBox() override;
};
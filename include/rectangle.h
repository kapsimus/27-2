#pragma once
#include "figure.h"

class Rectangle: public Figure {
    double sideLengthLeft, sideLengthUp;
public:
    Rectangle(Point newCenter, double newSideLengthLeft, double newSideLengthUp);
    double area() override;
    void boundingBox() override;
};
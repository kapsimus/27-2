#include <iostream>
#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle(Point newCenter, double newSideLengthLeft, double newSideLengthUp) : Figure(newCenter) {
    sideLengthLeft = std::abs(newSideLengthLeft);
    sideLengthUp = std::abs(newSideLengthUp);
}

double Rectangle::area() {
    return sideLengthLeft * sideLengthUp;
}

void Rectangle::boundingBox() {
    Point c = getCenter();
    double dx = sideLengthUp / 2;
    double dy = sideLengthLeft / 2;
    std::cout << "Bounding box coordinates: x1=" << c.getX() - dx << ", y1=" << c.getY() - dy << "; x2="
              << c.getX() + dx << ", y2=" << c.getY() - dy << "; x3=" << c.getX() - dx << ", y3="
              << c.getY() + dy << "; x4=" << c.getX() + dx << ", y4=" << c.getY() + dy << std::endl;
}
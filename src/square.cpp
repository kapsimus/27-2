#include <iostream>
#include <cmath>
#include "square.h"

Square::Square(Point newCenter, double newSideLength) : Figure(newCenter) {
    sideLength = std::abs(newSideLength);
}

double Square::area() {
    return sideLength * sideLength;
}

void Square::boundingBox() {
    Point c = getCenter();
    double delta = sideLength / 2;
    std::cout << "Bounding box coordinates: x1=" << c.getX() - delta << ", y1=" << c.getY() - delta << "; x2="
              << c.getX() + delta << ", y2=" << c.getY() - delta << "; x3=" << c.getX() - delta << ", y3="
              << c.getY() + delta << "; x4=" << c.getX() + delta << ", y4=" << c.getY() + delta << std::endl;
}
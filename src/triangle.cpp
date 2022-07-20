#include <iostream>
#include <cmath>
#include "triangle.h"

Triangle::Triangle(Point newCenter, double newSideLength) : Figure(newCenter) {
    sideLength = std::abs(newSideLength);
}

double Triangle::area() {
    return sideLength * sideLength * std::sqrt(3) / 4;
}

void Triangle::boundingBox() {
    Point c = getCenter();
    double dx = sideLength / 2;
    double dy = std::sqrt(sideLength * sideLength - sideLength * sideLength / 4);
    std::cout << "Bounding box coordinates: x1=" << c.getX() - dx << ", y1=" << c.getY() - dy << "; x2="
              << c.getX() + dx << ", y2=" << c.getY() - dy << "; x3=" << c.getX() - dx << ", y3="
              << c.getY() + dy << "; x4=" << c.getX() + dx << ", y4=" << c.getY() + dy << std::endl;
}
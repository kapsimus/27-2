#include <iostream>
#include <cmath>
#include "circle.h"


#define PI 3.1415926

Circle::Circle(Point newCenter, double newRadius): Figure(newCenter) {
    radius = std::abs(newRadius);
}

double Circle::area() {
    return PI * radius * radius;
}

void Circle::boundingBox() {
    Point c = getCenter();
    std::cout << "Bounding box coordinates: x1=" << c.getX() - radius << ", y1=" << c.getY() - radius << "; x2="
        << c.getX() + radius << ", y2=" << c.getY() - radius << "; x3=" << c.getX() - radius << ", y3="
        << c.getY() + radius << "; x4=" << c.getX() + radius << ", y4=" << c.getY() + radius << std::endl;
}
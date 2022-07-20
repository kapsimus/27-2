#include "point.h"

Point::Point(double xCoord, double yCoord):x(xCoord), y(yCoord){
}

void Point::setPoint(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

Point::Point() {
    x = 0;
    y = 0;
}

Point* Point::getPoint() {
    return this;
}

double Point::setX(double xCoord) {
    x = xCoord;
}

double Point::setY(double yCoord) {
    y = yCoord;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}



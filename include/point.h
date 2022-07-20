#pragma once

class Point {
    double x;
    double y;
public:
    Point(double xCoord, double yCoord);

    Point();

    Point* getPoint();
    void setPoint(double xCoord, double yCoord);
    double setX(double xCoord);
    double setY(double yCoord);
    double getX();
    double getY();
};
#include <iostream>
#include "circle.h"
#include "point.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

int main() {
    std::string op;
    Point center;
    double x, y;
    Color color;
    std::string strColor;
    do {
        std::cout << "Enter center coordinates (x, y):" << std::endl;
        std::cin >> x >> y;
        center.setX(x);
        center.setY(y);
        std::cout << "Enter figure color (red, green, blue, none): ";
        std::cin >> strColor;
        if (strColor == "red") color = red;
        else if (strColor == "green") color = green;
        else if (strColor == "blue") color = blue;
        else color = none;
        std::cout << "Enter figure (circle, rectangle, square, triangle, exit):" << std::endl;
        std::cin >> op;
        if (op == "circle") {
            double radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            Circle circle(center, radius);
            circle.setColor(color);
            std::cout << "Circle square = " << circle.area() << std::endl;
            std::cout << "Circle color - " << circle.getColor() << std::endl;
            circle.boundingBox();
        }
        if (op == "rectangle") {
            double sideLeft, sideUp;
            std::cout << "Enter length of left side: ";
            std::cin >> sideLeft;
            std::cout << "Enter length of upper side: ";
            std::cin >> sideUp;
            Rectangle rectangle(center, sideLeft, sideUp);
            rectangle.setColor(color);
            std::cout << "Rectangle square = " << rectangle.area() << std::endl;
            std::cout << "Rectangle color - " << rectangle.getColor() << std::endl;
            rectangle.boundingBox();
        }
        if (op == "square") {
            double side;
            std::cout << "Enter length of side: ";
            std::cin >> side;
            Square square(center, side);
            square.setColor(color);
            std::cout << "Square square = " << square.area() << std::endl;
            std::cout << "Square color - " << square.getColor() << std::endl;
            square.boundingBox();
        }
        if (op == "triangle") {
            double side;
            std::cout << "Enter length of side: ";
            std::cin >> side;
            Triangle triangle(center, side);
            triangle.setColor(color);
            std::cout << "Triangle square = " << triangle.area() << std::endl;
            std::cout << "Triangle color - " << triangle.getColor() << std::endl;
            triangle.boundingBox();
        }
    } while (op != "exit");
    return 0;
}

#include <iostream>
#include "figure.h"


Figure::Figure(Point c){
    center = c;
}
void Figure::setCenter(Point newCenter) {
    center = newCenter;
}
Point Figure::getCenter() {
    return center;
}

std::string Figure::getColor() {
    if (color == red) return "red";
    else if (color == green) return "green";
    else if (color == blue) return "blue";
    else if (color == none) return "none";
}

void Figure::setColor(Color newColor) {
    color = newColor;
}

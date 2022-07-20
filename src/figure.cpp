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

Color Figure::getColor() {
    return color;
}

void Figure::setColor(Color newColor) {
    color = newColor;
}

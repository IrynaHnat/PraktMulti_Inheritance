
#include "Circle.h"
using namespace std;

Circle::Circle(double radius) : radius(radius) {}

double Circle::square() const {
    return PI * radius * radius;
}

double Circle::length() const {
    return 2 * PI * radius;
}

void Circle::setRadius(double radius) {
    if (radius > 0)
        this->radius = radius;
    else
        cout << "Radius must be positive.\n";
}

double Circle::getRadius() const {
    return radius;
}

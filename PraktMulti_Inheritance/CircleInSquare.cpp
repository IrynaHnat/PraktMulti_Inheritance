#include "CircleInSquare.h"

CircleInSquare::CircleInSquare(double radius)
    : Circle(radius), Square(radius* SQRT_2)
{}

double CircleInSquare::totalLength() const {
    return Circle::length() + Square::length();
}

double CircleInSquare::partialSquare() const {
    return Square::square() - Circle::square();
}

void CircleInSquare::setRadius(double radius) {
    if (radius > 0) {
        Circle::setRadius(radius);
        Square::setSide(radius * SQRT_2);
    }
    else {
        std::cout << "Radius must be positive.\n";
    }
}

void CircleInSquare::setSide(double side) {
    if (side > 0) {
        Square::setSide(side);
        Circle::setRadius(side / SQRT_2);
    }
    else {
        std::cout << "Side must be positive.\n";
    }
}
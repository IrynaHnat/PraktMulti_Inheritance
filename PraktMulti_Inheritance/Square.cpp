#include "Square.h"
using namespace std;

Square::Square(double side) : side(side) {}

double Square::square() const {
    return side * side;
}

double Square::length() const {
    return 4 * side;
}

void Square::setSide(double side) {
    if (side > 0)
        this->side = side;
    else
        cout << "Side must be positive.\n";
}

double Square::getSide() const {
    return side;
}
#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInSquare : public Circle, public Square {
public:
    CircleInSquare(double radius = 1.0);
    double totalLength() const;
    double partialSquare() const;
    void setRadius(double radius);
    void setSide(double side);

private:
    static constexpr double SQRT_2 = 1.41421356237;
};
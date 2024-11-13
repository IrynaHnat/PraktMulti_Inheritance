
#pragma once
#include <iostream>

class Circle {
public:
    Circle(double radius = 1.0);
    double square() const;
    double length() const;
    void setRadius(double radius);
    double getRadius() const;

private:
    double radius;
    static constexpr double PI = 3.141592653589793;
};


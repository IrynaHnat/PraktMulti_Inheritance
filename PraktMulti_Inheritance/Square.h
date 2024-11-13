#pragma once
#include <iostream>

class Square {
public:
    Square(double side = 1.0);
    double square() const;
    double length() const;
    void setSide(double side);
    double getSide() const;

private:
    double side;
};

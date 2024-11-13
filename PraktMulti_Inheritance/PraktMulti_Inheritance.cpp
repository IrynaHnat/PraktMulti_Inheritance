
#include <iostream>
#include "CircleInSquare.h"
using namespace std;

int main() {
    CircleInSquare figure(5.0);

    cout << "Circle radius: " << figure.getRadius() << endl;
    cout << "Square side: " << figure.getSide() << endl;
    cout << "Total length (circle + square): " << figure.totalLength() << endl;
    cout << "Partial square (outer - inner): " << figure.partialSquare() << endl;

    figure.setRadius(10.0);
    cout << "\nAfter setting new circle radius to 10.0:" << endl;
    cout << "Circle radius: " << figure.getRadius() << endl;
    cout << "Square side: " << figure.getSide() << endl;
    cout << "Total length (circle + square): " << figure.totalLength() << endl;
    cout << "Partial square (outer - inner): " << figure.partialSquare() << endl;

    figure.setSide(14.0);
    cout << "\nAfter setting new square side to 14.0:" << endl;
    cout << "Circle radius: " << figure.getRadius() << endl;
    cout << "Square side: " << figure.getSide() << endl;
    cout << "Total length (circle + square): " << figure.totalLength() << endl;
    cout << "Partial square (outer - inner): " << figure.partialSquare() << endl;

    
}

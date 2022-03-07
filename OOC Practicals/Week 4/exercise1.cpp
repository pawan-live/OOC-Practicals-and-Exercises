#include <iostream>
#include "ShapeArea.h"

using namespace std;

struct circle {
    float radius;
}c1;

struct rectangle {
    float length, width;
}r1,r2;

struct Square {
    float length;
}s1;

float areaCircle(float radius);
float areaRectangle(float length, float width);
float areaSquare(float length);

int main() {
    cout << "Enter garden length: ";
    cin >> r1.length;
    cout << "Enter garden width: ";
    cin >> r1.width;
    cout << "Enter rectangle length: ";
    cin >> r2.length;
    cout << "Enter rectangle width: ";
    cin >> r2.width;
    cout << "Enter circle radius: ";
    cin >> c1.radius;
    cout << "Enter square length: ";
    cin >> s1.length;

    cout << endl;
    cout << "The area is: " << areaRectangle(r1.length, r1.width) - (areaRectangle(r2.length, r2.width) + areaCircle(c1.radius) + areaSquare(s1.length)) << endl;

    return 0;
}



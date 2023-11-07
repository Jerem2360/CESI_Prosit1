// CESI_Prosit1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.hpp"
#include <cmath>


Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(Point other) {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}


int main()
{
    Point a(3, 0);
    Point b(0, 4);
    std::cout << "La distance qui sépare A et B est " << a.distance(b) << "\n";
}

// CESI_Prosit1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.hpp"


int main()
{
    // initial coordinates are {3, 0} and {0, 4}
    Point a(3, 0);
    Point b(0, 4);
    std::cout << "La distance qui sépare A et B est " << a.distance(b) << "\n";
    // 5
    a.move(-3, 0);
    b.move(1, -3);
    // new coordinates are {0, 0} and {1, 1}
    std::cout << "La distance qui sépare A et B est " << a.distance(b) << "\n";
    // 1.414 (sqrt(2))
}

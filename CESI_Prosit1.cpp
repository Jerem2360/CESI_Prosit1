// CESI_Prosit1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.hpp"


int main()
{
    Point a(3, 0);
    Point b(0, 4);
    std::cout << "La distance qui sépare A et B est " << a.distance(b) << "\n";
    b.move(1, 1);
    std::cout << "La distance qui sépare A et B est " << a.distance(b) << "\n";
}

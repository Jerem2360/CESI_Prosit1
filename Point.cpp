#include "Point.hpp"
#include <cmath>


Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(Point other) {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

void Point::move(double x, double y) {
    this->x += x;
    this->y += y;
}


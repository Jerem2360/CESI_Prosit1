#include "Point.hpp"
#include <cmath>


Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(Point other) {
    return std::sqrt((this->x - other.x) * (this->x - other.x) + (this->y - other.y) * (this->y - other.y));
}

void Point::move(double x, double y) {
    this->x += x;
    this->y += y;
}


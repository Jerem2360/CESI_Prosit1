#pragma once


class Point {
	double x, y;

public:
	Point(double x, double y);
	double distance(Point other);
};


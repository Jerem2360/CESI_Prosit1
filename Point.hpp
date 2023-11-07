#pragma once


/*
Represents a point in 2d orthnormal coordinate system.
*/
class Point {
	double x, y;

public:
	/*
	Initialize a new Point object with the specified x and y coordinates.
	*/
	Point(double x, double y);
	/*
	Calculate the distance between this Point and the specified point.
	*/
	double distance(Point other);
	/*
	Move this Point by the specified number of units in the x and y coordinates.
	*/
	void move(double x, double y);
};


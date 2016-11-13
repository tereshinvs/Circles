#include "Point.h"

Point::Point(int _x, int _y): x(_x), y(_y) {}

int Point::get_x() const {
	return x;
}

int Point::get_y() const {
	return y;
}

Point Point::operator+(const Point &t) const {
	return Point(get_x() + t.get_x(), get_y() + t.get_y());
}

const Point &Point::operator+=(const Point &t) {
	x += t.get_x();
	y += t.get_y();
	return *this;
}
#include <cstdlib>

#include "Circle.h"

Circle::Circle(int max_x, int max_y, int max_v_x, int max_v_y) {
	rad = 10;
	center = Point(rand() % max_x, rand() % max_y);
	velocity = Point(rand() % (2 * max_v_x) - max_v_x, rand() % (2 * max_v_y) - max_v_y);
}

void Circle::update_pos(int max_x, int max_y) {
	Point tmp = center + velocity;
	if (tmp.get_x() < rad || tmp.get_x() + rad >= max_x)
		velocity = Point(-velocity.get_x(), velocity.get_y());
	if (tmp.get_y() < rad || tmp.get_y() + rad >= max_y)
		velocity = Point(velocity.get_x(), -velocity.get_y());
	center += velocity;
}

int Circle::get_rad() const {
	return rad;
}

const Point &Circle::get_center() const {
	return center;
}
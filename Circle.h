#ifndef H_CIRCLE
#define H_CIRCLE

#include "Point.h"

class Circle {
	private:
		Point center, velocity;
		int rad;

	public:
		Circle(int max_x = 1, int max_y = 1, int max_v_x = 1, int max_v_y = 1);
		void update_pos(int max_x, int max_y);
		int get_rad() const;
		const Point &get_center() const;
};

#endif
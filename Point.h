#ifndef H_POINT
#define H_POINT

class Point {
	private:
		int x, y;

	public:
		Point(int _x = 0, int _y = 0);
		int get_x() const;
		int get_y() const;

		Point operator+(const Point &t) const;
		const Point &operator+=(const Point &t);
};

#endif
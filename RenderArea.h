#ifndef H_RENDERAREA
#define H_RENDERAREA

#include <QWidget>
#include <vector>

#include "Circle.h"

class RenderArea: public QWidget {
	Q_OBJECT

	public:
		RenderArea(int __width, int __height, int n, QWidget *parent = 0);
		QSize minimumSizeHint() const;
		QSize sizeHint() const;
		void update_pos();

	protected:
		void paintEvent(QPaintEvent *event = 0);

	private:
		std::vector<Circle> circle_list;
		int _width, _height;
};

#endif
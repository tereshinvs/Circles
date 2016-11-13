#include "RenderArea.h"

#include <QPainter>
#include <QRect>

RenderArea::RenderArea(int __width, int __height, int n, QWidget *parent):
	QWidget(parent), _width(__width), _height(__height) {
	setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);

    circle_list.resize(n);
    for (Circle &circle: circle_list)
    	circle = Circle(_width, _height, 20, 20);
}

QSize RenderArea::minimumSizeHint() const {
	return QSize(_width, _height);
}

QSize RenderArea::sizeHint() const {
	return QSize(_width, _height);
}

void RenderArea::paintEvent(QPaintEvent *event) {
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setBrush(Qt::red);

	for (Circle &circle: circle_list)
		painter.drawEllipse(circle.get_center().get_x() - circle.get_rad(),
			circle.get_center().get_y() - circle.get_rad(),
			2 * circle.get_rad(), 2 * circle.get_rad());
}

void RenderArea::update_pos() {
	for (Circle &circle: circle_list)
		circle.update_pos(_width, _height);
}
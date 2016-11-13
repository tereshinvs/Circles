#include "Window.h"

Window::Window(int _width, int _height, int n) {
	render_area = new RenderArea(_width, _height, n, this);

	QGridLayout *layout = new QGridLayout();
	layout->setSizeConstraint(QLayout::SetFixedSize);
	layout->addWidget(render_area);
	setLayout(layout);

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update_pos()));
	timer->start(50);
}

void Window::update_pos() {
	render_area->update_pos();
	render_area->update();
}
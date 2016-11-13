#ifndef H_WINDOW
#define H_WINDOW

#include <QWidget>
#include <QGridLayout>
#include <QTimer>

#include "RenderArea.h"

class Window: public QWidget {
	Q_OBJECT

	public slots:
		void update_pos();

	public:
		Window(int _width, int _height, int n);

	private:
		RenderArea *render_area;
		QTimer *timer;
};

#endif
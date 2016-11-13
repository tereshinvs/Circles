#include <QtGui>

#include <QApplication>

#include "Window.h"

const int _WIDTH = 640, _HEIGHT = 480, N = 10;

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Window window(_WIDTH, _HEIGHT, N);
	window.show();
	return app.exec();
}
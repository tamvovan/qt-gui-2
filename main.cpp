#include "demoqtgui2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	demoqtgui2 w;
	w.setGeometry(0, 0, 700, 600);
	w.show();
	return a.exec();
}

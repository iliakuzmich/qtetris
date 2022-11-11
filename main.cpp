#include "mainwindow.h"
#include "blocks.h"
#include "painter.h"
#include <QApplication>

//а еще это говно надо починить)))

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    std::vector<dot> cho_narisovat;

    dot first = dot(1, 3);
    dot second = dot(4, 2);
    dot third = dot(7, 7);

    cho_narisovat.push_back(first);
    cho_narisovat.push_back(second);
    cho_narisovat.push_back(third);

    painter Painter;

    Painter.paintBig(cho_narisovat, w);

    return a.exec();
}

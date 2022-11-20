#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    heap cho_narisovat;

//    cho_narisovat.heapDots[5][0] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][1] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][2] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][3] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][4] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][5] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][6] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][7] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][8] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[5][9] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[4][6] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
//    cho_narisovat.heapDots[6][6] = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);

//    painter Painter;

//    Painter.paintBig(cho_narisovat, w);

//    cho_narisovat.delstring(w);

//    Painter.paintBig(cho_narisovat, w);

    gameplay StartGame(w);



    return a.exec();
}

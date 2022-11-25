#include "gameplay.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    gameplay StartGame(w);

    StartGame.StartTimer();

    return a.exec();
}

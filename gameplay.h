#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include "painter.h"
#include <QKeyEvent>
#include <QTimer>

class gameplay
{
public:
    gameplay(MainWindow &window);
    QTimer *timer;
    heap Heap;
    dot Dot;
    painter Painter;

public slots:
    void Game();
    void StartTimer(); //доделать
    void StopTimer();  //доделать
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAMEPLAY_H

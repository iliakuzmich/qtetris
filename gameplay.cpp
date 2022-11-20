#include "gameplay.h"

gameplay::gameplay(MainWindow &window)
{
    timer = new QTimer(&window);
    MainWindow::connect(timer, SIGNAL(timeout), &window, SLOT(Game()));
}

void gameplay::Game(){
    Dot.go_down(Heap);
}

void gameplay::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
        case(Qt::Key_A):
            Dot.go_left(Heap);
        case(Qt::Key_D):
            Dot.go_right(Heap);
        case(Qt::Key_S):
            Dot.go_realy_down(Heap);
    }
}

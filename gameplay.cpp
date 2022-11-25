#include "gameplay.h"
#include <iostream>

gameplay::gameplay(MainWindow &window)
{
    timer = new QTimer(&window);
    Dot.x = 5;
    Dot.y = 0;
    connect(timer, &QTimer::timeout, this, &gameplay::Game);
}

void gameplay::Game(){
    if(!(Heap.isTop())){
        Dot.go_down(Heap);
    }

//    Painter.allBlack(window);
//    Painter.paintBig(Heap, Dot, this->win);
//    Painter.paintSmall(Dot, win);
}

void gameplay::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
        case(Qt::Key_A):
            Dot.go_left(Heap);
        case(Qt::Key_D):
            Dot.go_right(Heap);
//        case(Qt::Key_S):
//            Dot.go_realy_down(Heap);
    }
}

void gameplay::StartTimer(){
    timer->start(100);
}

void StopTimer(){

}

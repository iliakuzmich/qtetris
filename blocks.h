#ifndef BLOCKS_H
#define BLOCKS_H

#include "QtGui/qcolor.h"
#include <deque>
#include "mainwindow.h"

class heap{
public:
    heap();
    std::deque<std::deque<QColor>> heapDots;
    void delstring(MainWindow &window);
    bool isTop();
};

class dot{
public:
    int x;
    int y;
    QColor color;
    dot(int x, int y);
    dot();
    void go_left(heap &Heap);
    void go_right(heap &Heap);
    void go_down(heap &Heap);
    //void go_realy_down(heap &Heap);
};

#endif // BLOCKS_H

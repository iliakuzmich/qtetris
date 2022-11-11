#ifndef BLOCKS_H
#define BLOCKS_H

#include "QtGui/qcolor.h"
#include <vector>

class dot{
private:
    int x;
    int y;
    bool is_top;
    QColor color;
public:
    dot(int x, int y);
    int getX();
    int getY();
    QColor getColor();
    void go_left();
    void go_right();
    void go_down();
};

struct bl{
    int x;
    int y;
    QColor color;
};

class heap{
private:
    int lines[20]; //проверка заполнения строк ЗЫ врзможно херовая идея
    void delstring();
    std::vector<bl> dots;
public:
    heap();
};
#endif // BLOCKS_H

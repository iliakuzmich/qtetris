#ifndef PAINTER_H
#define PAINTER_H

#include "mainwindow.h"
#include "blocks.h"
#include <vector>

class painter:public MainWindow
{
public:
    painter();
    void paintBig(std::vector<dot> &Blocks, MainWindow &window);
    void paintSmall(std::vector<dot> &Blocks, MainWindow &window);
    void allBlack(MainWindow &window);
};

#endif // PAINTER_H

#include "painter.h"
#include "mainwindow.h"

painter::painter(){

}

void painter::paintBig(heap &Blocks,dot &Dot, MainWindow &window){
    for(int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            window.colorizeBig(i, j , Blocks.heapDots[i][j]);
        }
    }
    window.colorizeBig(Dot.x, Dot.y, Dot.color);
}

void painter::paintSmall(dot &Blocks, MainWindow &window){
    window.colorizeSmall(2, 2, Blocks.color);
}

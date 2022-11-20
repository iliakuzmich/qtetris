#include "painter.h"
#include "mainwindow.h"

painter::painter(){

}

void painter::allBlack(MainWindow &window){
    for (int i = 0; i < 20; i++){ // переделать на подсчет строк
        for (int j = 0; j < 10; j++){
            window.colorizeBig(i, j , Qt::black);
        }
    }
   for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            window.colorizeSmall(i, j , Qt::black);
        }
    }
}

void painter::paintBig(heap &Blocks, MainWindow &window){
    for(int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            window.colorizeBig(i, j , Blocks.heapDots[i][j]);
        }
    }
}

//void painter::paintSmall(std::vector<dot> &Blocks, MainWindow &window){
//    int len = Blocks.size();
//    allBlack(window);
//    for(int i = 0; i < len; i++){
//        window.colorizeSmall(Blocks[i].getX(), Blocks[i].getY() , Blocks[i].getColor());
//    }
//}

void painter::paintSmall(dot Blocks, MainWindow &window){
    window.colorizeSmall(2, 2, Blocks.color);
}

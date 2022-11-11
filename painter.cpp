#include "painter.h"
#include "mainwindow.h"

painter::painter(){

}

void allBlack(MainWindow &window){
    for (int i = 0; i < 21; i++){
        for (int j = 0; j < 11; j++){
            window.colorizeBig(i, j , Qt::black);
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            window.colorizeSmall(i, j , Qt::black);
        }
    }
}



void paintBig(std::vector<dot> &Blocks, MainWindow &window){ //Крч, помнишь в том семе мы как то делали
                                                             //темлейтную функцию где была сортировка по убываюнию и по возрастанию
                                                             //в зависимости от того че передаем и это было без if
                                                             // вот тут надо тоже самое
    int len = Blocks.size();
    allBlack(window);
    for(int i = 0; i < len; i++){
        window.colorizeBig(Blocks[i].getX(), Blocks[i].getY() , Blocks[i].getColor());
    }
}

void paintSmall(std::vector<dot> &Blocks, MainWindow &window){
    int len = Blocks.size();
    allBlack(window);
    for(int i = 0; i < len; i++){
        window.colorizeSmall(Blocks[i].getX(), Blocks[i].getY() , Blocks[i].getColor());
    }
}

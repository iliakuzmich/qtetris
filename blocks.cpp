#include "blocks.h"

dot::dot(int X, int Y){
    x = X;
    y = Y;
    is_top = false;
    color = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
}

void dot::go_down(){
    y += 1;

    if (y > 24){
        delete this;
    }
}

void dot::go_left(){
    if (x - 1 > -1){
        x -= 1;
    }
}

void dot::go_right(){
    if (x + 1 < 11){
        x += 1;
    }
}

QColor dot::getColor(){
    return color;
}

int dot::getX(){
    return x;
}

int dot::getY(){
    return y;
}

heap::heap(){
    memset(lines, 0, sizeof(int) * 20); //заполняем массив 0
}

void heap::delstring(){
    std::vector<bl>::iterator it;
    for (int i = 0; i < 20; i++){
        if (lines[i] == 10){ //если строка полностью заполнена
            for (it = dots.begin(); it < dots.end(); it++){//запускаем цикл по всем элементам
                if (it->y == i){//если У точки равен У заполненной строки
                    dots.erase(it);//удаляем его
                }
            }
            for (it = dots.begin(); it < dots.end(); it++){
                if (it->y > i){//если У точки больше чем у заполненной строки
                    it->y -= 1;//спескаем на 1 вниз этот блок
                }
            }
        }
    }
}

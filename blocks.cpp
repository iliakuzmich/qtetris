#include "blocks.h"

dot::dot(int X, int Y){
    x = X;
    y = Y;
    color = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
}

dot::dot(){
    x = 0;
    y = 5;
    color = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
}

//void go_realy_down(heap &Heap){
//    int k = 0;
////    while(Heap.heapDots[this->x][this->y + k] == QColor(0,0,0)){

////    }
//}

void dot::go_down(heap &Heap){
    if(Heap.heapDots[this->x][this->y + 1] == QColor(0,0,0)){
        y += 1;
    }
    else{
        Heap.heapDots[this->x][this->y] = this -> color;
        this->x = 0;
        this->y = 5;
        this->color = QColor(rand()%5 * 50,rand()%5 * 50,rand()%5 * 50);
    }
}

void dot::go_left(heap &Heap){
    if(Heap.heapDots[this->x - 1][this->y + 1] == QColor(0,0,0)){
        x -= 1;
    }
}

void dot::go_right(heap &Heap){
    if(Heap.heapDots[this->x + 1][this->y] == QColor(0,0,0)){
        x += 1;
    }
}

heap::heap(){
    heapDots.resize(20);
    for (int i = 0; i < 20; i++){
        heapDots[i].resize(10);
        for (int j = 0; j < 10; j++){
            heapDots[i][j] = QColor(0 ,0 ,0);
        }
    }
}

void heap::delstring(MainWindow &window){
    int k;
    std::deque<QColor> a(10, QColor(0,0,0));
    for (int i = 0; i < 20; i++){
        k = 0;
        for (int j = 0; j < 10; j++){
            if (heapDots[i][j] != QColor(0 ,0 ,0)){
                k += 1;
            }
            else{
                break;
            }
            if (k == 10){
                heapDots.erase(heapDots.begin() + i);
                heapDots.push_front(a);
                window.score();
            }
        }
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);

    ui->tableWidget->setRowCount(20);
    ui->tableWidget->setColumnCount(10);

    ui->tableWidget_2->setRowCount(4);
    ui->tableWidget_2->setColumnCount(4);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_2->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::colorizeBig(size_t x, size_t y, QColor color){
    ui->tableWidget->setItem(x, y , new QTableWidgetItem);
    ui->tableWidget->item(x, y)->setBackground(color);
}

void MainWindow::colorizeSmall(size_t x, size_t y, QColor color){
    ui->tableWidget_2->setItem(x, y , new QTableWidgetItem);
    ui->tableWidget_2->item(x, y)->setBackground(color);
}


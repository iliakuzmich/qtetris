#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void colorizeBig(size_t x, size_t y, QColor color);
    void colorizeSmall(size_t x, size_t y, QColor color);
    void allBlack();
protected:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

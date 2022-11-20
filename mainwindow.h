#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTimer>

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
    void score();
    int sc;
protected:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H

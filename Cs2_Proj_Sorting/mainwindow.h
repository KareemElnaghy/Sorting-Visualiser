#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QtCore>
#include<QtGui>
#include<vector>
#include <QGraphicsRectItem>
#include<qwidget.h>
#include"qgraphicsview.h"
#include <QPen>
#include <QColor>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Heap_Button_clicked();

    void on_Tree_Button_clicked();

    void on_Comb_Button_clicked();

    void on_Counting_Button_clicked();

    void on_Bubble_Button_clicked();



    void on_Generate_Button_clicked();

    void on_arraySize_Button_clicked();

    void on_SetDelayButton_clicked();

    void on_Shell_Button_clicked();

    void on_Insertion_Button_clicked();

    void on_Quick_Button_clicked();

    void on_Quick_Button_2_clicked();

    void on_Merge_button_clicked();

    void on_Radix_Button_clicked();

    void on_Selection_Sort_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

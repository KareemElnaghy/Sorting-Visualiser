#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<vector>
#include <QGraphicsRectItem>
#include<qwidget.h>
#include"qgraphicsview.h"
#include <QPen>
#include <QColor>
#include<ctime>
#include<QTimer>
#include<QtGlobal>
#include<cstdlib>
#include<iostream>
#include<QtCore>
using namespace std;


int dtime;
bool repeat=false;
int NUM;
int elementwidth;
int elementheight;
QGraphicsRectItem** rectangle;
QGraphicsRectItem *placeHolder;
QBrush blackBrush(Qt::black);
QBrush whiteBrush(Qt::white);
QBrush greenBrush(Qt::green);
int compare;
QBrush redBrush(Qt::red);
QPen blackPen(Qt::black);
QPen redPen(Qt::red);

QPen whitePen(Qt::white);

int* temparr;
int xcoordinate = -1250;
int ycoordinate = 475;
  QGraphicsScene *scene;

  void Delay(int x)
  {
  QTimer timer;//  THIS PART WAS TAKEN FROM CHATGPT
                    timer.start(x);     //Start the timer with a 5-second interval


                    QObject::connect(&timer, &QTimer::timeout, []()// Connect a lambda function to the timer's timeout signal
                    {
                        qDebug();
                    });
                    QEventLoop loop;   // Wait for the timer to finish
                    QObject::connect(&timer, &QTimer::timeout, &loop, &QEventLoop::quit);
                    loop.exec();

  }


  void MainWindow::on_arraySize_Button_clicked()
  {

      if(repeat)
      {
          for(int i=0;i<NUM;i++)
          {
              scene->removeItem(rectangle[i]);
              scene->update();
              Delay(dtime);
          }
      }
      int x;
     x= ui->ArraySize->text().toInt();
     NUM=x;
   rectangle= new QGraphicsRectItem*[NUM];
   temparr=new int[NUM];
   elementwidth=10;
if(NUM<50)
    elementheight=6;
else
    elementheight=3;
  }


  int getMax()
  {
      int max = *(temparr);
      for (int i = 1; i < NUM; i++)
      {
          if (*(temparr + i) > max)
              max = *(temparr + i);
      }

      return max;
  }


  int getMin()
     {
         int min = *(temparr);
         for (int i = 1; i < NUM; i++)
         {
             if (*(temparr + i) < min)
                 min = *(temparr + i);
         }

         return min;
     }


void Filling(int* arr,int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) // loop that fills the array with the required data elements (numbers from 0 to size-1)
    {
        *(arr + i) = i;
    }
    for (int i = 2; i < size; i++) // loop that shuffles the content of the array randomly
    {
        int j = (rand() % i) + 1;
        int temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
    }
}
void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int *arr, int n, int i) {
    int largest = i;  // Initialize largest as root
    int l = 2 * i + 1;  // left = 2*i + 1
    int r = 2 * i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        rectangle[i]->setBrush(redBrush);
              rectangle[largest]->setBrush(redBrush);
              scene->update();
              Delay(dtime);
        swap(arr[i], arr[largest]);
        rectangle[i]->setRect(xcoordinate + (elementwidth * i), ycoordinate, elementwidth, -arr[i] * elementheight);
               rectangle[largest]->setRect(xcoordinate + (elementwidth * largest), ycoordinate, elementwidth, -arr[largest] * elementheight);
               scene->update();
               Delay(dtime);


               rectangle[i]->setBrush(Qt::white);
               rectangle[largest]->setBrush(Qt::white);
               scene->update();
               Delay(dtime);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);

    }

    else
      {
          // Set the brush color for the sorted rectangle to green
          rectangle[i]->setBrush(greenBrush);
          scene->update();
          Delay(dtime);
      }
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(blackBrush);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Generate_Button_clicked()
{

     Filling(temparr,NUM);
    for(int i=0;i<NUM;i++)
    {

    // Create a QGraphicsRectItem
    rectangle[i] = new QGraphicsRectItem();

    // Set the rectangle's width and height
    rectangle[i]->setRect(xcoordinate+(10.5*i), ycoordinate, elementwidth, -temparr[i]*elementheight);
    rectangle[i]->setPen(blackPen);
    rectangle[i]->setBrush(whiteBrush);
    // Add the rectangle to the QGraphicsScene
    scene->addItem(rectangle[i]);
    scene->update();
            Delay(dtime);
    }
    repeat=true;

}


void MainWindow::on_Heap_Button_clicked()
{
    // Build heap (rearrange array)
       for (int i = NUM / 2 - 1; i >= 0; i--)
           heapify(temparr, NUM, i);

       // One by one extract an element from heap
       for (int i = NUM - 1; i > 0; i--) {
           // Move current root to end
           Swap(temparr[0], temparr[i]);

           // call max heapify on the reduced heap
           heapify(temparr, i, 0);
       }
       for(int i=0;i<NUM;i++)
       {
           rectangle[NUM-i-1]->setRect(xcoordinate + (elementwidth * i), ycoordinate, elementwidth, -temparr[i] * elementheight);
           rectangle[NUM-i-1]->setBrush(greenBrush);
           scene->update();
           Delay(dtime);
       }
}



void MainWindow::on_Tree_Button_clicked()
{


}


void MainWindow::on_Comb_Button_clicked()
{

}


void MainWindow::on_Counting_Button_clicked()
{



    int* output = new int[NUM]();
      int range = getMax() - getMin();
      int* count = new int[range + 1]();


      int i;
      for (i = 0; i <NUM; i++)
          ++*(count+*(temparr+i));
      for (i = 1; i <= (range); ++i)
          *(count+i) += *(count+(i - 1));

      for (i = 0; i < NUM; i++)
      {
          int j = *(count+*(temparr+i));
          *(output + (--j)) = *(temparr+i);
      }

      for (i = 0; i < NUM; i++)
          *(temparr+i) = *(output+i);

      delete[]output;
      delete[]count;
}


void MainWindow::on_Bubble_Button_clicked()
{
    compare=0;
    int i,j;
       for(i=0; i<NUM-1;i++)
       {
           for(j=0; j<NUM-i-1;j++)
           {
               rectangle[j]->setBrush(redBrush);
               rectangle[j+1]->setBrush(redBrush);
               scene->update();
               Delay(dtime);
               compare++;
               ui->CompCount->setText(QString::number(compare));
               if(*(temparr+j)>*(temparr+j+1))
               {
                   Swap(*(temparr+j), *(temparr+j+1));
                   rectangle[j]->setRect(xcoordinate+(elementwidth*j), ycoordinate, elementwidth, -temparr[j]*elementheight);
                   rectangle[j+1]->setRect(xcoordinate+(elementwidth*(j+1)), ycoordinate, elementwidth, -temparr[j+1]*elementheight);
                   scene->update();
                   Delay(dtime);


               }
               rectangle[j]->setBrush(whiteBrush);
               rectangle[j+1]->setBrush(greenBrush);
           }
       }
       rectangle[1]->setBrush(greenBrush);
scene->update();

}



void MainWindow::on_SetDelayButton_clicked()
{
  dtime=  ui->DelayTiming->text().toInt();
}


void MainWindow::on_Shell_Button_clicked()
{
    int i, j;
    compare=0;
    for (int gap = NUM / 2; gap > 0; gap /= 2)
    {
      for (i = gap; i < NUM; i++)
      {
        int temp = *(temparr+i);
        rectangle[j]->setBrush(redBrush);
        rectangle[j-gap]->setBrush(redBrush);
        scene->update();
        Delay(dtime);
        for (j = i; j >= gap && *(temparr+(j - gap)) > temp; j -= gap)
        {

            *(temparr+j) = *(temparr+(j - gap));
        }
        rectangle[j]->setBrush(whiteBrush);
        rectangle[j-gap]->setBrush(whiteBrush);
        scene->update();
Delay(dtime);
        compare++;
        ui->CompCount->setText(QString::number(compare));
          *(temparr+j) = temp;

      }
    }
}


void MainWindow::on_Insertion_Button_clicked()
{
    compare = 0;
     int key, i, j;
     for (i = 1; i < NUM; i++)
     {
         key = temparr[i];
         for (j = i - 1; j >= 0; j--)
         {
             if (temparr[j] <= key) {
                 compare++;
                 ui->CompCount->setText(QString::number(compare));
                 break;
             }

             rectangle[j]->setBrush(redBrush);             // set the brush color for the elements being compared to red

             rectangle[j + 1]->setBrush(redBrush);

             scene->update();             // update the scene with a delay

             Delay(dtime);

             temparr[j + 1] = temparr[j];

             // update the position of the rectangles being compared
             rectangle[j]->setRect(xcoordinate + (elementwidth * (j + 1)), ycoordinate, elementwidth, -temparr[j] * elementheight);
             rectangle[j + 1]->setRect(xcoordinate + (elementwidth * j), ycoordinate, elementwidth, -temparr[j + 1] * elementheight);

             rectangle[j]->setBrush(whiteBrush);
             rectangle[j + 1]->setBrush(whiteBrush);

             scene->update();             // update the scene with a delay

             compare++;
             ui->CompCount->setText(QString::number(compare));
         }

         if (temparr[j] <= key)
         {
             temparr[j + 1] = key;

             // update the position of the sorted rectangles
             rectangle[j + 1]->setRect(xcoordinate + (elementwidth * (j + 1)), ycoordinate, elementwidth, -temparr[j + 1] * elementheight);
             rectangle[i]->setRect(xcoordinate + (elementwidth * i), ycoordinate, elementwidth, -temparr[i] * elementheight);

             // set the brush color for the sorted rectangles to green
             rectangle[j + 1]->setBrush(greenBrush);
             rectangle[i]->setBrush(greenBrush);

             // update the scene with a delay
             scene->update();
             compare++;
             ui->CompCount->setText(QString::number(compare));
         }
     }
     for(int i=0;i<NUM;i++)
     {
         rectangle[NUM-i-1]->setRect(xcoordinate + (elementwidth * i), ycoordinate, elementwidth, -temparr[i] * elementheight);
         rectangle[NUM-i-1]->setBrush(greenBrush);
         scene->update();
         Delay(dtime);
     }
}



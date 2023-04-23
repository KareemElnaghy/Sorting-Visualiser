//
//  Quick Sort.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#include "Quick_Sort.h"
#include "Fill.h"
#include <iostream>
using namespace std;

QuickSort_1::QuickSort_1():size(0), arr(nullptr)
{
}

QuickSort_1::~QuickSort_1()
{
    delete arr;
}

QuickSort_1::QuickSort_1(int n): size(n)
{
    arr = new int [size];
}
int QuickSort_1::counter = 0;

int* QuickSort_1::getArr()
{
    return arr;
}

int QuickSort_1::getSize()
{
    return size;
}

int QuickSort_1::getCounter()
{
    return counter;
}

void QuickSort_1::incrementCount()
{
    counter++;
}

void QuickSort_1::fillArr()
{
    Fill(arr,size);
}


int QuickSort_1::partition(int *q, int low, int high) {
  
      int pivot = *(q+low);
      int temp = high;
    
      for (int i = high; i > low; i--) {
          
          if (*(q+i) > pivot)
          {
              swap(*(q+i), *(q+(temp--)));
          }

              counter++;
          
      }
      swap(*(q+low), *(q+temp));
        
      return temp;
}

void QuickSort_1::SortArr(int *array, int low, int high) {    //Quicksort function
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        SortArr(array, low, pivotIndex - 1);
        SortArr(array, pivotIndex + 1, high);
    }
}
void QuickSort_1::PrintArr() const
{
    for(int i = 0; i<size; i++)
        cout<<*(arr + i)<<"  ";
    
    cout<<endl;
}



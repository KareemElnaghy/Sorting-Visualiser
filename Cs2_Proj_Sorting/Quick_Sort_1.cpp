//
//  Quick Sort.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#include "Quick_Sort.h"
#include <iostream>
using namespace std;


QuickSort_1::QuickSort_1(int* x, int y) 
    : Sorting(x, y)
{
   
}

QuickSort_1::~QuickSort_1()
{
    delete[]arr;
}

int* QuickSort_1::getArr()
{
    return arr;
}

int QuickSort_1::Get_Size()const
{
    return size;
}


int QuickSort_1::partition(int *q, int low, int high) {
  
      int pivot = *(q+low);
      int temp = high;
    
      for (int i = high; i > low; i--) {
          
          if (*(q+i) > pivot)
          {
              swap(*(q+i), *(q+(temp--)));
          }

              compare++;
          
      }
      swap(*(q+low), *(q+temp));
        
      return temp;
}

void QuickSort_1::SortArr(int *array, int low, int high) 
{    //Quicksort function
    if (low < high) 
    {
        int pivotIndex = partition(array, low, high);
        SortArr(array, low, pivotIndex - 1);
        SortArr(array, pivotIndex + 1, high);
    }
}




//
//  Quick Sort.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#include "Quick_Sort.h"
#include <iostream>
using namespace std;


QuickSort_1::QuickSort_1(int y)
    : Sorting(y)
{
   
}



int QuickSort_1::partition(int *q, int low, int high) {
  
      int pivot = *(q+low);
      int temp = high;
    
      for (int i = high; i > low; i--) {
          
          if (*(q+i) > pivot)
          {
              Swap(*(q+i), *(q+(temp--)));
          }

              compare++;
          
      }
      Swap(*(q+low), *(q+temp));
        
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

void QuickSort_1::Sort()
{
    SortArr(arr, 0, size - 1);
}




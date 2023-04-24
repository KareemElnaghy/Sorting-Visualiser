//
//  Quick_Sort_2.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/19/23.
//

#include "Quick_Sort.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

QuickSort_2::QuickSort_2():QuickSort_1()
{
}

QuickSort_2::QuickSort_2(int n): QuickSort_1(n) //calls constructor of base class
{
}

int QuickSort_2::randomPartition(int *q, int low, int high)
{
    srand(time(NULL));      //random seed generator
    int randomIndex = (rand() % (high - low)) + low;   //Assigns random index between highest index and lowest index
    
    swap(*(q+(randomIndex)),*(q+(low))); //swaps random index element with first element

    
    return partition(q, low, high); //uses same partition function as base class
}

void QuickSort_2::SortArr(int *array, int low, int high) {    //Quicksort function
    if (low < high)
    {
        int pivotIndex = randomPartition(array, low, high);
        SortArr(array, low, pivotIndex-1);
        SortArr(array, pivotIndex + 1, high);
    }
}




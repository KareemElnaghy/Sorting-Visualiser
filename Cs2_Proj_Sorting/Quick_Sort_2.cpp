//Quick_Sort_2.cpp
#include "Quick_Sort.h"
#include <ctime>
#include <cstdlib>

QuickSort_2::QuickSort_2(int y): QuickSort_1(y) //calls constructor of base class
{
}

int QuickSort_2::randomPartition(int *q, int low, int high)
{
    srand(time(NULL));      //random seed generator
    int randomIndex = (rand() % (high - low)) + low;   //Assigns random index between highest index and lowest index
    
    Swap(*(q+(randomIndex)),*(q+(low))); //swaps random index element with first element

    
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




//
//  main.cpp
//  Insertion Sort
//
//  Created by jana hegazy on 23/04/2023.
//

#include <iostream>
#include "insertionSort.h"
using namespace std;

insertionSort::insertionSort(int* j, int n) : Sorting(j, n)
    {

    }

void insertionSort::Sort()
{
    int key;
    int j;
    for(int i=1; i<size; i++)
    {
        key=*(arr+i);
        j=i-1;
        while(j>=0 && *(arr+j) > key)
        {
            *(arr+j+1) = *(arr+j);
            compare++;
            j = j - 1;
        }
        compare++;
        *(arr+j+1) = key;
    }
}

   

    
    


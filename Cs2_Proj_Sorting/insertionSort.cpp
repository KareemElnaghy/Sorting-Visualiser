//
//  main.cpp
//  Insertion Sort
//
//  Created by jana hegazy on 23/04/2023.
//

#include "Common.h"// the common header file of the filling randomly an array
#include "Header.h"
#include <iostream>
using namespace std;


insertionSort:: insertionSort(): size(0), arr(nullptr), counter(0)
    {
        
    }
insertionSort:: insertionSort(int *j, int n)
    {
        arr = new int [n];
        size=n;
        
    }
insertionSort:: ~insertionSort()
    {
        delete[] arr;
    }
void insertionSort:: fillArr()
    {
        Common(arr, size);// the common header file where we fill arrays
    }
    void insertionSort:: sortArr()
    {
        int key;
        int j;
        
        for(int i=1; i<size; i++)
        {
            key=arr[i];
            j=i-1;
            
            while(j>=0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            counter++;
            arr[j + 1] = key;
        }
    }
    void  insertionSort:: printArr() const
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(arr+i)<< " "; // Print each element of the array
        }
    }
        
    int insertionSort:: getCount()
    {
        return counter;
    }
    int insertionSort::getSize()
    {
        return size;
    }
    
    


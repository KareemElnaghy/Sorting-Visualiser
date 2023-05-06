//
//  Heap_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/6/23.
//

#include "Heap_Sort.h"

Heap::Heap(int s) : Sorting(s)
{
for (int i = (size / 2) - 1; i >= 0; i--)
heapify(arr, i, size);
    
}

void Heap::heapify(int *arr,int i,int s)
{
int max = i;
int l = (2 * i) + 1;
int r = (2 * i) + 2;
if ((s>l)&&(*(arr+l) > *(arr+max)))
{
compare++;
max = l;
}
if ((s > r) && (*(arr+r) > *(arr+max)))
{
compare++;
max = r;
}
if (i!=max)
{
    Swap(*(arr+i), *(arr+max));
    heapify(arr, max, s);
}
}

void Heap::Sort()
{
for (int i = size - 1; i >= 0; i--)
{
    Swap(*arr, *(arr+i));
    heapify(arr, 0, i);
}
}


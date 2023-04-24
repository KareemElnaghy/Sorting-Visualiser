#include "Merge_Sort.h"
#include<iostream>
Merge_Sort::Merge_Sort(int* ar, int left, int right) : Sorting(ar, right + 1), r(right), l(left)
{
   
}

void Merge_Sort::Sort(int* ar,int left,int right)
{
    if (right > left)
    {
        int mid = (left + right) / 2;
        Sort(arr, left, mid);
        Sort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }

}

  void Merge_Sort::Sort()
{
      Sort(arr, l, r);
}

void Merge_Sort::Merge(int* ar, int left, int mid, int right)
{
    int i, j, k;
    i = left;
    j = mid + 1;
    k = 0;
    int* temp = new int[right - left + 1];
    while (i <= mid && j <= right) //sorts and merges the 2 half arrays into the temporary array
    {
        if (ar[i] <= ar[j])
        {
            temp[k++] = ar[i];
            i++;
        }
        else
        {
            temp[k++] = ar[j];
            j++;
        }
       // compare++;
    }
    while (i <= mid) //loop to drop the remaining contents of the left half array into the temporary array
    {
        temp[k++] = ar[i++];
    }
    while (j <= right)//loop to drop the remaining contents of the right half array into the temporary array
    {
        temp[k++] = ar[j++];
    }
    for (int i = left, k = 0; i <= right; i++,k++)//loop to copy the temp array into the original array
    {
        arr[i] = temp[k];
    }
    delete[]temp;//returns the borrowed memory to the heap

}
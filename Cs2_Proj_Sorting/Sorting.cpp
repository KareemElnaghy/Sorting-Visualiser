#ifndef SORTING_H
#define SORTING_H
#include "Sorting.h"
#include<iostream>
Sorting::Sorting(int* x, int y, int z):arr(x),size(y),compare(z)
{

}
void Sorting::print_arr() const
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

int Sorting::Get_count() const
{
    return compare;
}
void Sorting::Set_count(int x)
{
    compare = x;
}
#endif


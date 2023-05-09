//Sorting.cpp
#include "Sorting.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Sorting::Sorting(int y) : size(y), compare(0)
{
    arr = new int[size];
	Fill();
}

Sorting::~Sorting()
{
	delete[] arr;
}

void Sorting::print_arr() const
{
    for (int i = 0; i < size; i++)
        std::cout << *(arr+i) << " ";
}

int Sorting::Get_count() const
{
    return compare;
}


void Sorting::Fill()
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) // loop that fills the array with the required data elements (numbers from 0 to size-1)
    {
        *(arr + i) = i;
    }
    for (int i = 2; i < size; i++) // loop that shuffles the content of the array randomly
    {
        int j = (rand() % i) + 1;
        Swap(*(arr+i), *(arr+j));
    }
}

void Sorting::Swap(int& x, int& y)
{
    {
        int temp = x;
        x = y;
        y = temp;
    }
}



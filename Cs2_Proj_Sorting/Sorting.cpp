#include "Sorting.h"
#include<iostream>
Sorting::Sorting(int* x, int y):arr(x),size(y),compare(0)
{

}
void Sorting::Fill()
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)//loop that fills the array with the required data elements( numbers from 1-num)
	{
		arr[i] = i;
	}
	for (int i = 2; i < size; i++)//loop that shuffles the content of the array randomly
	{
		int j = (rand() % i) + 1;
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
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
int Sorting::Get_Size() const
{
	return size;
}
void Sorting::Set_count(int x)
{
    compare = x;
}


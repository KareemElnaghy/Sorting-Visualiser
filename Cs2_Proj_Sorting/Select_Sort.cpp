#include "Select_Sort.h"
#include"Fill.h"
#include<iostream>
Select_Sort::Select_Sort(int* a, int s): min(1),arr(a),size(s),compare(0)
{
	for (int i =1; i < size-1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			compare++;
		}
		Swap(arr[min], arr[i]);
	}

}

void Select_Sort::Swap(int& x, int& y)
{
	{
		int temp = x;
		x = y;
		y = temp;
	}
}

void Select_Sort::print_arr() const
{
	for (int i = 0; i <= size; i++)
		std::cout << arr[i] << " ";
}

int Select_Sort::get_count() const
{
	return compare;
}
int Select_Sort::get_Size() const
{
	return size;
}

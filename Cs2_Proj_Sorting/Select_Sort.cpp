#include "Select_Sort.h"

#include<iostream>
Select_Sort::Select_Sort(int s) : min(1), Sorting(s)
{


}
void Select_Sort::Sort()
{
	for (int i = 1; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr+j) < *(arr+min))
			{
				min = j;
			}
			compare++;
		}
		Swap(*(arr+i), *(arr+min));
	}

}



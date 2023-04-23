#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include"Fill.h"
#include<iostream>
class Select_Sort
{
private:
	int* arr;
	int size;
	int min;
	int compare;
public:
	Select_Sort(int*, int);
	int get_count();
	void Swap(int&, int&);
};
#endif

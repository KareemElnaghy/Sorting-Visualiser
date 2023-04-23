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
	void print_arr() const;
	int get_count() const;
	int get_Size() const;
	void Swap(int&, int&);
};
#endif

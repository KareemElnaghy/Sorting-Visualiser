#ifndef MERGESORT_H
#define MERGESORT_H
#include"Fill.h"
#include<iostream>
class Merge_Sort
{
private:
	int* arr;
	int size;
	int compare;
	void Merge(int*, int, int, int);
public:
	int get_count() const;
	Merge_Sort(int*, int,int);
	int get_Size() const;
	void print_arr() const;

};
#endif


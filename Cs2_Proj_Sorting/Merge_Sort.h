#ifndef MERGESORT_H
#define MERGESORT_H
#include<iostream>
#include"Sorting.h"
class Merge_Sort :public Sorting
{
private:
	void Merge(int*, int, int, int);
public:
	Merge_Sort(int*, int, int);
	int Get_Size() const;

};
#endif


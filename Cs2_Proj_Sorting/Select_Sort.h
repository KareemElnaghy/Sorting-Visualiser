#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include<iostream>
#include "Sorting.h"
class Select_Sort : public Sorting
{
private:
	int min;
public:
	Select_Sort(int*, int);
	int Get_Size() const;
	void Swap(int&, int&);
};
#endif

//Merge_Sort.h

#ifndef MERGESORT_H
#define MERGESORT_H

#include"Sorting.h"
class Merge_Sort :public Sorting
{
private:
	int l;
	int r;
	void Merge(int*, int, int, int);
	virtual void Sort(int*, int, int);
public:
	Merge_Sort(int*, int, int);
	virtual void Sort();

};
#endif


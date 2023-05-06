//Select_Sort.h

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "Sorting.h"
class Select_Sort : public Sorting
{
private:
	int min;
public:
	Select_Sort(int);
	virtual void Sort();
};
#endif

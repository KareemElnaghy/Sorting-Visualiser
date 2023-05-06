//Quick_Sort.h

#ifndef Quick_Sort_h
#define Quick_Sort_h
#include "Sorting.h"

class QuickSort_1:public Sorting
{
public:
    QuickSort_1(int);   //arguementative constructor
   virtual int partition(int *, int, int);  //virtual partition faction
    virtual void SortArr(int*, int, int);    //quick sort function
     void Sort();
};

class QuickSort_2: public QuickSort_1
{
public:
 
    QuickSort_2(int);   //argumentative constructor
    int randomPartition(int *, int, int);   //randomPartition function to randomise pivot
    void SortArr(int*, int, int);   //quickSort function for derived class
};


#endif /* Quick_Sort_h */


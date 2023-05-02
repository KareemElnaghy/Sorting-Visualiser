#ifndef couting_radix_h
#define couting_radix_h
#include "Sorting.h"

class Counting :public Sorting
{
public:
    Counting(int*, int);   //arguementative constructor
    void Sort();
    int getMax();
    int getMin();
    
};

class Radix : public Counting
{
public:

    Radix(int*, int);   //argumentative copy constructor
    void Sort();
    void countSort(int);
};


#endif /* couting_radix_h */

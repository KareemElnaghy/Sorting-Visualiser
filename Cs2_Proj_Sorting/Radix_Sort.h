//Radix_Sort.h

#ifndef Radix_Sort_h
#define Radix_Sort_h
#include "Sorting.h"

class Radix: public Sorting
{
public:

    Radix(int);   //argumentative copy constructor
    void Sort();
    void countSort(int);
    int getMax()const;
};
#endif /* Radix_Sort_h */

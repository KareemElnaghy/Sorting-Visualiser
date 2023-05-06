//Counting_Sort.h

#ifndef couting_radix_h
#define couting_radix_h
#include "Sorting.h"

class Counting: public Sorting
{
public:
    Counting(int);   //arguementative constructor
    void Sort();
    int getMax()const;
    int getMin()const;
    
};



#endif /* couting_radix_h */

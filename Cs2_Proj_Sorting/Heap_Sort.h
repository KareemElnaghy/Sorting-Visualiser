//
//  Heap_Sort.hpp


#ifndef Heap_Sort_hpp
#define Heap_Sort_hpp
#include "Sorting.h"

class Heap:public Sorting
{
public:
void heapify(int*, int, int);
Heap(int);
void Sort();


};

#endif /* Heap_Sort_h */

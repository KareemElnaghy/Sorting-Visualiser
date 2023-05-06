//
//  Heap_Sort.hpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/6/23.
//

#ifndef Heap_Sort_hpp
#define Heap_Sort_hpp
#include "Sorting.h"

class Heap_Sort:public Sorting
{
public:
void heapify(int*, int, int);
Heap_Sort(int*,int);
void Sort();


};

#endif /* Heap_Sort_h */

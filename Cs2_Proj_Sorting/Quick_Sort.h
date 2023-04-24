//
//  Quick Sort.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Quick_Sort_h
#define Quick_Sort_h
#include "Sorting.h"

class QuickSort_1:public Sorting
{
public:
    QuickSort_1(int*, int);   //arguementative constructor
    ~QuickSort_1();
    int* getArr();  //returns array
   virtual int partition(int *, int, int);  //virtual partition faction
   virtual void SortArr(int*, int, int);    //quick sort function
   int Get_Size()const;
};

class QuickSort_2: public QuickSort_1
{
public:
 
    QuickSort_2(int*, int);   //argumentative copy constructor
    int randomPartition(int *, int, int);   //randomPartition function to randomise pivot
    void SortArr(int*, int, int);   //quickSort function for derived class
};


#endif /* Quick_Sort_h */


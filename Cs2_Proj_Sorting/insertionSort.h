//
//  Header.h
//  Insertion Sort
//
//  Created by jana hegazy on 23/04/2023.
//

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include"Sorting.h"
class insertionSort: public Sorting
{    
public:
    insertionSort(int *, int);
    ~insertionSort();
    void sortArr();
    int Get_Size() const;
    
    
    
};
#endif /* Header_h */

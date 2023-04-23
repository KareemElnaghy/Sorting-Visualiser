//
//  Header.h
//  Insertion Sort
//
//  Created by jana hegazy on 23/04/2023.
//

#ifndef Header_h
#define Header_h

class insertionSort
{
private:
    
    int *arr;
    int size;
    int counter;
    
public:
    insertionSort();
    insertionSort(int *, int);
    ~insertionSort();
    void fillArr();
    void sortArr();
    void printArr() const;
    int getCount();
    int getSize();
    
    
    
};
#endif /* Header_h */

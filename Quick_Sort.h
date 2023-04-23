//
//  Quick Sort.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Quick_Sort_h
#define Quick_Sort_h

class QuickSort_1
{
private:
    int *arr;
    int size;
    static int counter;
public:
    QuickSort_1();  //default constructor
    ~QuickSort_1(); //destructor
    QuickSort_1(int);   //arguementative constructor
    int* getArr();  //returns array
    int getSize();  //returns size of array
    int getCounter();   //returns comparison
    void incrementCount();  //increments counter by 1
    void fillArr(); //fills the array with random numbers with no duplicates
   virtual int partition(int *, int, int);  //virtual partition faction
   virtual void SortArr(int*, int, int);    //quick sort function
    void PrintArr() const;  //prints the array
};

class QuickSort_2: public QuickSort_1
{
public:
    QuickSort_2();  //default copy constructor
    QuickSort_2(int);   //argumentative copy constructor
    int randomPartition(int *, int, int);   //randomPartition function to randomise pivot
    void SortArr(int*, int, int);   //quickSort function for derived class
};


#endif /* Quick_Sort_h */


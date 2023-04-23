//
//  main.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/16/23.
//

#include "Quick_Sort.h"
#include <iostream>
using namespace std;

int main()
{
    QuickSort_1 array(10);
    array.fillArr();
    
    cout<<"First Element used as Pivot"<<endl;
    cout<<"Unsorted Array: "<<endl;
    array.PrintArr();

    cout<<"Sorted Array: "<<endl;
    array.SortArr(array.getArr(), 0,array.getSize()-1);
    array.PrintArr();

    cout<<"The number of comparisons made: "<<array.getCounter()<<endl;

    cout<<endl;
    cout<<endl;
    
    
    QuickSort_2 array1(10);

    array1.fillArr();
    
    cout<<"Random Element used as Pivot"<<endl;
    cout<<"Unsorted Array: "<<endl;
    array1.PrintArr();

    cout<<"Sorted Array: "<<endl;
    array1.SortArr(array1.getArr(), 0,array1.getSize()-1);
    array1.PrintArr();

    cout<<"The number of comparisons made: "<<array1.getCounter()<<endl;


}

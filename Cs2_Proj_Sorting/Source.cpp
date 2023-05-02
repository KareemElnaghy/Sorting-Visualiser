#include"Merge_Sort.h"
#include"Select_Sort.h"
#include "Sorting.h"
#include"insertionSort.h"
#include "Quick_Sort.h"
#include "counting_radix.h"
#include<iostream>
using namespace std;
int main()
{
	int num = 11;
	int* arr = new int[num];

//    Select_Sort testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
//
//      Merge_Sort testing(arr,0, num-1);
//      testing.print_arr();
//      cout << endl;
//      testing.Sort();
//      testing.print_arr();
//      cout << endl;
//      cout << "Comparisons: " << testing.Get_count() << endl;
//
//    QuickSort_1 testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
//
//    QuickSort_2 testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
//
//    insertionSort testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;

    Radix testing(arr, num);
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    testing.Sort();
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    cout << "Comparisons: " << testing.Get_count() << endl;

//    Counting testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;



}

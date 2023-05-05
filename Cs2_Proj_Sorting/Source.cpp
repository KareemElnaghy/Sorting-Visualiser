#include"Merge_Sort.h"
#include"Select_Sort.h"
#include "Sorting.h"
#include"insertionSort.h"
#include "Quick_Sort.h"
#include "Counting_Sort.h"
#include "Radix_Sort.h"
#include "Bubble_Sort.h"
#include "Comb_Sort.h"
#include "Tree_Sort.h"

#include<iostream>
using namespace std;
int main()
{
	int num = 11;
    int* arr= new int[num];

//    Select_Sort testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;

//      Merge_Sort testing(arr,0, num-1);
//      testing.print_arr();
//      cout << endl;
//      testing.Sort();
//      testing.print_arr();
//      cout << endl;
//      cout << "Comparisons: " << testing.Get_count() << endl;
//
//    cout<<endl<<"Quick Sort (First element pivot) "<<endl;
//    QuickSort_1 testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
////
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

//    cout<<endl<<"Radix Sort"<<endl;
//    Radix testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
    
//    cout<<endl<<"Counting Sort"<<endl;
//    Counting testing2(arr2, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing2.print_arr();
//    cout << endl;
//    testing2.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing2.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing2.Get_count() << endl;

//    cout<<endl<<"Bubble Sort"<<endl;
//    Counting testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;

//    cout<<endl<<"Comb Sort"<<endl;
//    Comb testing(arr, num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    testing.Sort();
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
//    cout << "Comparisons: " << testing.Get_count() << endl;
    
    cout<<endl<<"Tree Sort"<<endl;
    Tree testing(arr, num);
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    testing.Sort();
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    cout << "Comparisons: " << testing.Get_count() << endl;
}

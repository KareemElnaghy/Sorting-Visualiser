#include"Merge_Sort.h"
#include"Select_Sort.h"

#include "Sorting.h"
#include"insertionSort.h"
#include "Quick_Sort.h"
#include<iostream>
using namespace std;
int main()
{
	int num = 7;
	int* arr = new int[num];

	//Select_Sort sortedtest(arr, num);
	//cout << sortedtest.Get_count() << endl << endl;
	//sortedtest.print_arr();
	/*Merge_Sort testing(arr, 0, num-1);
	testing.print_arr();
	cout << endl << testing.Get_Size()<<endl << testing.Get_count();*/
	/*int te[11] = { 0,10,9,8,7,6,5,4,3,2,1 };*/
	insertionSort testing2(arr, num);
	testing2.print_arr();
	cout << endl;
	cout << "Sorted Array: " << endl;
	testing2.sortArr();
	testing2.print_arr();
	cout << endl;
	cout << endl;
	cout << "Comparisons: " << testing2.Get_count() << endl;

	/*QuickSort_1 testing1(arr, num, 0);
	testing1.SortArr(arr, 0, testing1.Get_Size() - 1);
	testing1.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing1.Get_count() << endl;*/

	/*QuickSort_2 testing2(arr, num);
	testing2.print_arr();
	cout << "Sorted Array: " << endl;
	testing2.SortArr(arr, 0, testing2.Get_Size() - 1);
	testing2.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing2.Get_count() << endl;*/
	

}
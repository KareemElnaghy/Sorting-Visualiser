#include"Merge_Sort.h"
#include"Select_Sort.h"

#include "Sorting.h"
#include"insertionSort.h"
#include "Quick_Sort.h"
#include<iostream>
using namespace std;
int main()
{
	int num = 101;
	int* arr = new int[num];

	//Select_Sort sortedtest(arr, num);
	//
	//cout << sortedtest.Get_count() << endl << endl;
	//sortedtest.print_arr();
	
	/*int te[11] = { 0,10,9,8,7,6,5,4,3,2,1 };*/
	/*insertionSort testing2(arr, num);
	testing2.print_arr();
	cout << endl;
	cout << "Sorted Array: " << endl;
	testing2.Sort();
	testing2.print_arr();
	cout << endl;
	cout << endl;
	cout << "Comparisons: " << testing2.Get_count() << endl;*/

	/*QuickSort_1 testing(arr, num);
	testing.print_arr();
	cout << endl;
	testing.Sort();
	testing.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing.Get_count() << endl;*/

	/*QuickSort_2 testing(arr, num);
	testing.print_arr();
	cout << endl;
	testing.Sort();
	testing.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing.Get_count() << endl;*/
	
	/*Select_Sort testing(arr, num);
	testing.print_arr();
	cout << endl;
	testing.Sort();
	testing.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing.Get_count() << endl;*/

	Merge_Sort testing2(arr,0, num-1);
	testing2.print_arr();
	cout << endl;
	testing2.Sort();
	testing2.print_arr();
	cout << endl;
	cout << "Comparisons: " << testing2.Get_count() << endl;
	

}
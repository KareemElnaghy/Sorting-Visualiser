#include"Merge_Sort.h"
#include"Select_Sort.h"
#include"Fill.h"
#include<iostream>
using namespace std;
int main()
{
	int num = 101;
	int* arr = new int[num];
	Fill(arr, num);
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
    }
	cout << endl << endl;
	Select_Sort sortedtest(arr, num);
	cout << sortedtest.get_count() << endl << endl;
	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";


	return 0;
}
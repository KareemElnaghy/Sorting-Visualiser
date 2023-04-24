#ifndef SORTING_H
#define SORTING_H
#include<iostream>
#include<ctime>
#include<cstdlib>
class Sorting
{
protected:
	int* arr;
	int size;
	int compare;
public:
	Sorting(int*, int);
	void print_arr() const;
	int Get_count() const;
	void Set_count(int);
	void Fill();
	virtual void Sort() = 0;
	virtual int Get_Size() const;
};
#endif


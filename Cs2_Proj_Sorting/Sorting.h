#pragma once
class Sorting
{
protected:
	int* arr;
	int size;
	int compare;
public:
	Sorting(int*, int, int);
	void print_arr() const;
	int Get_count() const;
	void Set_count(int);
	virtual int Get_Size() const = 0;
};


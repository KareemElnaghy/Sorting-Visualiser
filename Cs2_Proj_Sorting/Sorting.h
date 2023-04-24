#pragma once
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
	virtual int Get_Size() const;
	void Fill();
};


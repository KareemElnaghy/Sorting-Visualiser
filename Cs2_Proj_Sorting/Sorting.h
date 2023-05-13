//Sorting.h

#ifndef SORTING_H
#define SORTING_H
#include <string>
class Sorting
{
protected:
	int* arr;
	const int size;
	int compare;
public:
	Sorting(int);
	~Sorting();
	void print_arr(std::string) const;
	int Get_count() const;
	void Fill();
	virtual void Sort() = 0;
    virtual void Swap(int &, int &);
  
};
#endif

#ifndef SORTING_H
#define SORTING_H
class Sorting
{
protected:
	int* arr;
	const int size;
	int compare;
public:
	Sorting(int);
	~Sorting();
	void print_arr() const;
	int Get_count() const;
	void Fill();
	virtual void Sort() = 0;
    virtual void Swap(int &, int &);
  
};
#endif

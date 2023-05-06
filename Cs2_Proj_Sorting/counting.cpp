//counting.cpp

#include "Counting_Sort.h"


Counting::Counting(int y) : Sorting(y)
    {
        
    }

    int Counting::getMax()const
    {
        int max = *(arr);
        for (int i = 1; i < size; i++)
        {
            if (*(arr + i) > max)
                max = *(arr + i);
        }

        return max;
    }

    int Counting::getMin()const
    {
        int min = *(arr);
        for (int i = 1; i < size; i++)
        {
            if (*(arr + i) < min)
                min = *(arr + i);
        }

        return min;
    }

    void Counting::Sort()
    {
        int* output = new int[size]();
        int range = getMax() - getMin();
        int* count = new int[range + 1]();


        int i;
        for (i = 0; i <size; i++)
            ++*(count+*(arr+i));
        for (i = 1; i <= (range); ++i)
            *(count+i) += *(count+(i - 1));

        for (i = 0; i < size; i++)
        {
            int j = *(count+*(arr+i));
            *(output + (--j)) = *(arr+i);
        }

        for (i = 0; i < size; i++)
            *(arr+i) = *(output+i);

        delete[]output;
        delete[]count;
    }



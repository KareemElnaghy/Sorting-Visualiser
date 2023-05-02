
#include "counting_radix.h"
using namespace std;
Radix::Radix(int* x, int y) : Counting(x, y)
{

}

void Radix::Sort()
{
    int max = getMax();

    for (int i = 1; (max / i) > 0; i *= 10)
        countSort(i);
}

void Radix::countSort(int x)
{
    int output[size]; // output array
    int i;
    int count[10] = {0};
    
    // Store count of occurrences in count[]
    for (i = 0; i < size; i++)
        (*(count + (*(arr + i) / x) % 10))++;

    
    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        *(count + i) += *(count + (i - 1));
    
    // Build the output array
    for (i = size - 1; i >= 0; i--) {
        *(output + *(count + (*(arr + i) / x) % 10) - 1) = *(arr + i);
        (*(count + (*(arr + i) / x) % 10))--;

    }
    
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < size; i++)
        *(arr+i) = *(output+i);
}

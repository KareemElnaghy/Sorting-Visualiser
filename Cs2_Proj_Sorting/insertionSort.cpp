//insertionSort.cpp

#include "insertionSort.h"
using namespace std;

insertionSort::insertionSort(int n) : Sorting(n)
    {

    }

void insertionSort::Sort()
{
    int key, i, j;
        for(i=1; i<size; i++)
        {
            
            key=*(arr+i);
      
        
            for(j=i-1;j>=0 && *(arr+j) > key; j--)
            {
             
                *(arr+j+1) = *(arr+j);
                 compare++;
                
            }
          
          if(*(arr+j) < key)
          compare++;
          
            *(arr+j+1) = key;
            
        }
}


   

    
    


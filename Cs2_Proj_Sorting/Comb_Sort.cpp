//
//  Comb_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/5/23.
//

#include "Comb_Sort.h"

Comb::Comb(int *x, int y): Sorting(x, y)
{
    
}
int Comb::nextGap(int x)
{
    int gap = x/1.3;
    
    if(gap < 1)
        return 1;
    
        return gap;
}
void Comb::Sort()
{
    int gap = size;
    bool swapped = true;
    
    while(gap != 1 || swapped == true)
    {
        gap = nextGap(gap);
        swapped = false;
        
        for(int i = 0; i<size - gap; i++)
        {
            compare++;
            if(*(arr+i) > *(arr+i+gap))
            {
                Swap(*(arr+i), *(arr+i+gap));
                swapped = true;
            }
        }
    }
}

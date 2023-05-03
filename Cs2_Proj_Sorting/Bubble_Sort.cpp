//
//  Bubble_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/3/23.
//

#include "Bubble_Sort.hpp"

Bubble::Bubble(int *x, int y):Sorting(x, y)
{
    
}
 void Bubble::Sort()
{
     int i,j;
     for(i=0; i<size-1;i++)
     {
         for(j=0; j<size-i-1;j++)
         {
             compare++;
             if(*(arr+j)>*(arr+j+1))
             {
                 Swap(*(arr+j), *(arr+j+1));
             }
         }
     }
}

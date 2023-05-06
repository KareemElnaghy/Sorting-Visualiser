//
//  Shell_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/6/23.
//

#include "Shell_Sort.h"
Shell::Shell(int x):Sorting(x)
{
    
}

void Shell::Sort() {
    int i, j;
  for (int gap = size / 2; gap > 0; gap /= 2)
  {
    for (i = gap; i < size; i++)
    {
      int temp = *(arr+i);
      
      for (j = i; j >= gap && *(arr+(j - gap)) > temp; j -= gap)
      {
          *(arr+j) = *(arr+(j - gap));
       
       
      }
      compare++;
        *(arr+j) = temp;
    }
  }
} 

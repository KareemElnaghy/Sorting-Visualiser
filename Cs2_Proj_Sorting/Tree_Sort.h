//
//  Tree_Sort.hpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/5/23.
//

#ifndef Tree_Sort_h
#define Tree_Sort_h
#include "Sorting.h"
class BinaryST
{
public:
    int info;   //stores the value
    BinaryST *left; //pointer to left leaf
    BinaryST *right;//pointer to right leaf
    
    BinaryST(); //Default constructor needed when creating the tree object
    BinaryST(int);  //parameterized constructor
    BinaryST* insertValue(BinaryST*, int);    //Insert function
};

class Tree:public BinaryST, public Sorting
{
    public:
    Tree(int*, int);
    void Sort();
    void inOrderTrav(BinaryST*, int &);
};

#endif /* Tree_Sort_h */

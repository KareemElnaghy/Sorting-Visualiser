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
    static int counter;//static counter to keep track of the comparisons made when inserting the values into the BST

    BinaryST(); //Default constructor needed when creating the tree object
    BinaryST(int);  //parameterized constructor
    BinaryST* insertValue(BinaryST*, int);    //Insert function
};

class Tree: public BinaryST, public Sorting //tree sort class inherits from both sorting and the BST classes
{
    public:
    Tree(int*, int);
    void Sort();
    void setCount(int);
    void inOrderTrav(BinaryST*, int &);
};

#endif /* Tree_Sort_h */

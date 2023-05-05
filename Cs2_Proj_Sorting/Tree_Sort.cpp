//
//  Tree_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/5/23.
//

#include "Tree_Sort.h"
BinaryST::BinaryST():info(0),left(nullptr),right(nullptr)
{
    
}
BinaryST::BinaryST(int x):left(nullptr),right(nullptr)    //parameterized constructer sets pointers to NULL and the info to value passed
{
    info = x;
}

BinaryST* BinaryST::insertValue(BinaryST* node, int x)    //Insert function
{
    if(!node)       //checks if node is not pointing to an object
    {
        return new BinaryST(x); //if true a new object is created and returned calling the paramterized constructor
    }
    
  
    if(x > node->info)  //if the value to be inserted is greater than the current root node than we navigate to the right and call the insert function again
    {
        node->right = insertValue(node->right, x);
    }
    
  else if(x <= node->info)  //otherwise it will navigate to the left, includes duplicates
    {
        node->left = insertValue(node ->left, x);
    }
        
        return node;
}

Tree::Tree(int* x, int y): Sorting(x, y)
{
    
}
void Tree::Sort()
{
    BinaryST *root = nullptr;
    int i =0;
    
    root = insertValue(root, arr[0]);
    
    for(int i = 1; i<size; i++)
        root = insertValue(root, arr[i]);
    
    inOrderTrav(root, i);
    
}

void Tree::inOrderTrav(BinaryST* x , int &i)
{
    if(x != nullptr)
    {
        inOrderTrav(x->left, i);
        arr[i++] = x->info;
        inOrderTrav(x->right, i);
    }
}

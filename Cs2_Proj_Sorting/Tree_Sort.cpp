//
//  Tree_Sort.cpp
//  TEMP
//
//  Created by Kareem Elnaghy on 5/5/23.
//

#include "Tree_Sort.h"
#include <iostream>
BinaryST::BinaryST():info(0),left(nullptr),right(nullptr)   //Default constructor
{
    
}
BinaryST::BinaryST(int x):info(x),left(nullptr),right(nullptr)   //parameterized constructer sets pointers to NULL and the info to value passed
{
}

int BinaryST::counter = 0;      //initialising static variable

BinaryST* BinaryST::insertValue(BinaryST* node, int x)    //Insert function
{
    if(!node)       //checks if node is not pointing to an object
    {
        return new BinaryST(x); //if true a new object is created and returned calling the paramterized constructor
    }
    
    counter++;  //increment comparison
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

Tree::Tree(int y): Sorting(y)    //paramterized constructor
{
    
}
void Tree::Sort()
{
    BinaryST *root = nullptr;
    int i =0;
    
    root = insertValue(root, *arr);     //creates the root of the tree
   
    for(int i = 1; i<size; i++)
    {
        root = insertValue(root, *(arr+i));     //inserts the rest of the values in the array into the BST
    }

    compare = root->counter;        //sets the compare member in the sorting class to the counter in the BST class
    
    inOrderTrav(root, i);       //In-order traversal to retrieve all the values in the BST in ascending order and putting it back into the array
    

}

void Tree::inOrderTrav(BinaryST* node , int &i)
{
    if(node != nullptr)    //loops until the very last node
    {
        inOrderTrav(node->left, i);
        *(arr +(i++)) = node->info;
        inOrderTrav(node->right, i);
    }
}

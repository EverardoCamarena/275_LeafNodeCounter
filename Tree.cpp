/*
* Tree program from book + leaf and node counters
* CECS 275 - Spring 2022
* @Everardo Camarena
* @Calvin Veith
* version 1.0.0
*/

#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    Tree pine;
    
    cout << "We have " << pine.getObjectCount() << " tree(s) in our program!\n";
    
    struct node *root = NULL;
    //place our nodes
    root = insert(root, 1);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    
    //display our nodes and leaves
    cout << "Node Counter: ";
    cout << countNodes(root);
    cout << "\nLeaf Counter: ";
    cout << countLeaves(root) << endl;
    
    return 0;
}
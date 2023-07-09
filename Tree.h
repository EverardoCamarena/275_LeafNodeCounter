#ifndef TREE_H
#define TREE_H

class Tree
{
    private:
        static int objectCount;
    public:
        Tree()
        {
            objectCount++;
        }
        int getObjectCount() const
        {
            return objectCount;
        }
        
};

int Tree::objectCount = 0;

int count =0;
struct node {
    int track;
    struct node *left, *right;
};

//make our nodes
struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->track = item;
    temp->left = temp->right = NULL;
    return temp;
}

//insert nodes from main.cpp
struct node *insert(struct node *node, int track) {
    if (node == NULL)
        return newNode(track);
    if (track < node->track)
        node->left = insert(node->left, track);
    else
        node->right = insert(node->right, track);
    return node;
}

int countNodes(struct node *root) {
    if (root != NULL) {
        countNodes(root->left);
        countNodes(root->right);
        count=count+1;
    }
    return count;
}

unsigned int countLeaves(struct node* root)  {  
    if(root == NULL)      
        return 0;  
    if(root->left == NULL && root->right == NULL)  
        return 1;         
    else
        return countLeaves(root->left) + countLeaves(root->right);  
}

#endif
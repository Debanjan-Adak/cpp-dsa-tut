#include<iostream>
using namespace std;
class Node
{
    public:

        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
// inorder of both trees, merge 2 sorted vectors and create a tree from 3rd inorder vector
//SC O(m+n)

//for SC O(h1+h2)
//convert BST into sorted LL
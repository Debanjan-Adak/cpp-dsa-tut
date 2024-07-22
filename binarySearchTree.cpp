#include<iostream>
#include<queue>
//#include <queue>
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
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);//separator
    while(!q.empty())
    {
        Node* temp=q.front();
        
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        }
        
    }
}
Node* insertIntoBST(Node* &root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }
    if(d>root->data)
    {
        root->right=insertIntoBST(root->right,d);
    }
    else
    {
        root->left=insertIntoBST(root->left,d);
    }
    return root;

}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertIntoBST(root,data);
        cin>>data;
    }
}
Node* minVal(Node* & root)
        {
            Node* temp =root;
            while(temp->left!=NULL)
            {
                temp=temp->left;
            }
            return temp;
        }
Node* deleteFromBST(Node* root,int val)
{
    if(root==NULL)
        return root;
    if(root->data==val)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minVal(root->right) ->data;// min from right or max from left. Min from right basically keep going left from next right
            //max from left means keep going right from first left
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
        }
    }
    else if(root->data>val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;

    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}
int main()
{
 Node* root=NULL;
 cout<<"ENter data to create BST"<<endl;
 takeInput(root);

 cout<<"printing the bst "<<endl;
 levelOrderTraversal(root);
 deleteFromBST(root,45);
  levelOrderTraversal(root);
 return 0;

}
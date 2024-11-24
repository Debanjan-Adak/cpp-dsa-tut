#include<iostream>
#include <queue>
using namespace std;
class node
{
    public:
    int data;
    node* right;
    node* left;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"ENter data for left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"ENter data for right node "<<data<<endl;
    root->right=buildTree(root->right);

return root;

}
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);//separator
    while(!q.empty())
    {
        node* temp=q.front();
        
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
void preOrderTraversal(node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}
void inOrderTraversal(node* temp)
{

    if(temp==NULL)
    {
        return;
    }
    inOrderTraversal(temp->left);
    cout<<temp->data<<" ";
    inOrderTraversal(temp->right);
}
void postOrderTraversal(node* temp)
{

    if(temp==NULL)
    {
        return;
    }
    postOrderTraversal(temp->left);
    postOrderTraversal(temp->right);
    cout<<temp->data<<" ";
}
int main()
{
    node* root=NULL;
    //create
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5  17 -1 -1 -1
    levelOrderTraversal(root);
    cout<<"Pre-order traversal: "<<"\n";
    preOrderTraversal(root);
    cout<<"\n In-order traversal: "<<"\n";
    inOrderTraversal(root);
    cout<<"\n Post-order traversal: "<<"\n";
    postOrderTraversal(root);
}
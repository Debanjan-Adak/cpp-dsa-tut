#include<iostream>
using namespace std;
//so singly linked list
//we need a type of data and the pointer will be of class type/ or linked list type
class Node{
  public:
  int data;
  Node* next;

  
  //constructor
  Node(int data)
  {
    this->data=data;
    this->next=NULL;
  }  
  //destructor
  ~Node()
  {
    int value=this->data;
    if(this->next !=NULL)
    {
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data "<<value<<endl;
  }
};
void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void InsertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    if(position==1)

    {
        InsertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    //inserting at last
    if(temp->next==NULL)
    {
        InsertAtTail(tail,data);
        return;
    }
    //creating a node for d
    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}
void deleteNodeByPos(int pos,Node* &head)// did not complete delete part 
{
    int count=1;
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        
        return;
    }
    Node* temp=head;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;
    delete temp->next;
}
void deleteNodeByVal(int data,Node* &head)
{
    Node* temp=head;
    if(head->data==data)
    {
        
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* curr=head;
    Node* prev=NULL;
    while(curr->data!=data && curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr->data!=data)
    {
        cout<<"data not found sadch"<<endl;
        return;
    }
    temp=curr;
    prev->next=curr->next;
    temp->next=NULL;
    delete temp;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        if(temp->next!=NULL)
        {
        
            cout<<"->";
        }
        temp=temp->next;
    
    }

}
int main()
{
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    //InsertAtHead(head,12);
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtPosition(head,tail,4,19);
    InsertAtTail(tail,89);
    deleteNodeByVal(100,head);
    print(head);
}



#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node *&tail, Node *&head, int d)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
        return;
    }
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (pos == 1)
    {
        insertAtHead(tail, head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }
    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next->prev = toInsert;
    temp->next = toInsert;
    toInsert->prev = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data;

        if (temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
}
void deleteNodeByPos(int pos, Node *&head,Node* &tail)
{
    int count = 1;
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

        return;
    }
    Node *curr = head;
    Node *prev=NULL;
    while (count < pos)
    {
        prev = curr;
        curr=curr->next;
        count++;
    }
    if(curr->next==NULL)
    {
        tail=prev;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    if(curr->next!=NULL)
    {
    curr->next->prev=prev;
    }
    curr->next=NULL;
    delete curr;
}
int getLength(Node *head)
{
    // cout<<"in get length";
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, head, 12);
    insertAtTail(tail, head, 14);
    insertAtTail(tail, head, 17);
    insertAtTail(tail, head, 18);
    insertAtPosition(head, tail, 77, 3);
    insertAtPosition(head, tail, 99, 1);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;

    insertAtPosition(head, tail, 100, 8);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    deleteNodeByPos(1,head,tail);
    print(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    deleteNodeByPos(7,head,tail);
    print(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    deleteNodeByPos(3,head,tail);
    print(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    // insertAtPosition(head,tail,87,2);
    // insertAtPosition(head,tail,99,4);
    print(head);
    cout << getLength(head) << endl;

    return 0;
}
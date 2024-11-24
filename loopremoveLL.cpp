//1)detect cycle
//2)remove cycle
//3)start node of loop
//for 1 map using node and visited(bool type)
#include<map>

bool detectLoop(Node* head)
{
    if(head==NULL)
        return false;
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!=NULL)
    {
        //cycle is present
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }    
    return false;
}
#include<iostream>
#include<queue>
using namespace std;
int main()
{   
    //max heap
    priority_queue<int> maxp;//priority queue the largest element comes at the front

    //min heap
    priority_queue<int,vector<int>,greater<int>> minp;

    maxp.push(1);
    maxp.push(7);
    maxp.push(3);
    maxp.push(2);
    maxp.push(0);
    int n=maxp.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxp.top()<<" ";
        maxp.pop();
    }
    cout<<endl;
   minp.push(1);
   minp.push(7);
   minp.push(3);
   minp.push(2);
   minp.push(0);
   for(int i=0;i<n;i++)
    {
        cout<<minp.top()<<" ";
        minp.pop();
    }
    //empty size same as before
}
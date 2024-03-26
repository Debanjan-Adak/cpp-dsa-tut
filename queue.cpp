#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(7);
    q.push(5);
    cout<<"First Element: "<<q.front()<<endl;//size empty same as others
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;//size empty same as others
    cout<<"Size: "<<q.size()<<endl; 
}
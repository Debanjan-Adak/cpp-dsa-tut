#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(15);
    s.push(25);
    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"SIze "<<s.size()<<endl;
    cout<<"empty "<<s.empty()<<endl;
}
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(l);//copy the list. Front , back initialize methods similar to deque so not repeating
    l.push_back(1);
    l.push_front(2);
    //l.pop_back();
    //l.pop_front();
    cout<<"Size :"<<l.size()<<endl;
    for(int i:l)
    {
        cout<<i<<"  ";
    }
    l.erase(l.begin());//this particular element will be deleted
    //l.erase(l.begin(),l.end()-1);
    cout<<"After Erase"<<endl;
     for(int i:l)
    {
        cout<<i<<"  ";
    }
}
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;//unique elements, sorted order , background bts implementation
    s.insert(1);
    s.insert(18);
    s.insert(18);//unique elements so this 18 is not inserted
    s.insert(8);
    s.insert(8);
    s.insert(5);
    cout<<s.size()<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<s.count(5)<<endl;//informs if the element is present or not
    //s.erase(s.begin());//deletes the element mentioned
    set<int>::iterator it=s.begin();
    it++;
    it++;
    s.erase(s.begin(),it);//deleted a range of element
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    set<int>::iterator itr=s.find(18);//returns iterator of the place where 5 is present
    cout<<"value present at itr"<< *itr<<endl;


}
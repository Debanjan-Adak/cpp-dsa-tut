#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//normal initialization
    vector<int> v1(5);//initialize with size 5 and all initial elements 0
    vector<int> v2(5,1);//initialize with size 5 and all elements initialized to 1
    vector<int> last(v2);//copies the vector v2 to vector last
    cout<<"is empty "<<v.empty()<<endl;
    cout<<"v1: "<<v1.size()<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<"v2: "<<v2.size()<<endl;
    for(int i:v2)
    {
        cout<<i<<" ";
    }




    
    //push_back function adds an element 
    cout<<"Capacity-> "<<v.capacity()<<endl;//size means total elements present || Capacity means total element which can be present
    cout<<"Size-> "<<v.size()<<endl;
    v.push_back(3);
    cout<<"Size-> "<<v.size()<<endl;
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Size-> "<<v.size()<<endl;
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size-> "<<v.size()<<endl;
    cout<<"Capacity-> "<<v.capacity()<<endl;// as the output shows, the vector doubles its capacity but the total element remains 3 thus size is 3 and capacity is 4
    cout<<"Element at 2nd index: -> "<<v.at(2)<<endl;
    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    v.pop_back();//removes element from the back
    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before clear"<<v.size()<<endl;
    v.clear();//clears the vector, size becomes 0 but capacity dosent become 0
    cout<<"After clear"<<v.size()<<endl;
    cout<<*v.begin();
}
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;//creating a deque
    d.push_back(1);//add an element at the back/last index
    d.push_front(2);//add an element to the first index
    d.push_front(7);
    /*for(int i:d)
    cout<<i<<" ";
    cout<<endl;
    d.pop_back();//remove element from the back
    for(int i:d)
    cout<<i<<" ";
    cout<<endl;
    d.pop_front();//remove element from the front
    for(int i:d)
    cout<<i<<" ";
    */
   cout<<"Element at index 1: "<<d.at(1)<<endl;
   cout<<"First Element: "<<d.front()<<endl;
   cout<<"Last Element: "<<d.back()<<endl;
   cout<<"is empty: "<<d.empty()<<endl;
   // for iterator use d.begin() and d.end() first and last respectively
   d.erase(d.begin()+1,d.begin()+2);//erases element from a particular index as mentioned here second element is deleted
   for(int i:d)
    cout<<i<<" ";
}
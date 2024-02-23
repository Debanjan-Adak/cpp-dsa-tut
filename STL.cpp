//This will give us info about STLs and how to use them
#include<iostream>
#include<array>
using namespace std;
int main()
{
    //int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    cout<<a[i]<<endl;
    cout<<"Element at 2 index is: "<<a.at(2)<<endl;
    cout<<"Check empty or not: "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
    
    return 0;

}
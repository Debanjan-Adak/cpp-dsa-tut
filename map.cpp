#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="debu";
    m[21]="adak";
    m[13]="kumar";
    m.insert({5,"arjun"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;//print will be in sorted order
    }
    int i=m.count(13);//present or not
    m.erase(13);//O(log n) ordered map //O(1)for unordered map using hash
    auto it=m.find(21);//returns iterator at 21
}
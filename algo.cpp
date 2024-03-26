#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    cout << binary_search(v.begin(), v.end(), 76) << endl;
    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    //max,min,reverse,swap,rotate,sort(behind the scene,intro  sort(quick,heap,insertion)) all algos present
}
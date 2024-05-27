#include<iostream>

using namespace std;

bool isSorted(int arr[],int size)
{
    if(size==0||size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else
    {
    bool ans=isSorted(arr+1,size-1);
    return ans;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,9,15};
    int arr1[]={1,3,5,7,8,6,14,18};
    cout<<isSorted(arr,9)<<endl;
    cout<<isSorted(arr1,8)<<endl;
    return 0;

}
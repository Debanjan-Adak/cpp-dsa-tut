#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,1,15,7,25,67,5,8};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }

    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<endl;
    return 0;
}
//finding index of the peak element in a mountain type array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,5,7,8,10,15,19,11,7,4,2};
    int start=0,end=sizeof(arr)/sizeof(int)-1,mid;
   
    while(start<end)
    {
        mid=(start+end)/2;
        //cout<<start<<endl;
        //cout<<end<<endl;
        
        if(arr[mid]<arr[mid+1])
        start=mid+1;
        else
        end=mid;
    }
    cout<<start;
    return 0;
}
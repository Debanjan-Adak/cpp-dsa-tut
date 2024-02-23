/*finding pivot element
suppose arr[]={1,2,3,4,5,6}
it is sorted as you can see, now if it is rotated
arr[]={4,5,6,1,2,3}
now here the pivot element will be either 6 or 1 where the value changes.slecting 6 or 1 depends on the question*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,6,1,2,3},start=0,end=sizeof(arr)/sizeof(int),mid;
    while(start<end)
    {
        mid=(start+end)/2;
        if(arr[mid]>=arr[start])
        start=mid+1;
        else
        end=mid;
    }
    cout<<end;
    return 0;
}

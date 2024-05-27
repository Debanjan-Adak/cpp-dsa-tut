#include<iostream>
using namespace std;
int partition(int *arr,int s,int e)
{
    cout<<"Im in partition"<<endl;
    cout<<s<<"  "<<e<<endl;
    int pivot=arr[s];
    int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        c++;
    }
    cout<<"value of c is : "<<c<<endl;
    swap(arr[s],arr[s+c]);
    return s+c;
}
void swap(int *arr,int s,int e,int i)
{
    cout<<"Im in swap"<<endl;
    cout<<s<<"  "<<e<<" "<<i<<endl;
    while(s<i&&e>i)
    {
        for(int j=s;j<=i;j++)
        {
            if(arr[s]>arr[i])
            break;
            else
            s++;
        }
        for(int j=e;j>=i;j--)
        {
            if(arr[e]<arr[i])
            break;
            else
            e--;
        }
        if(s<i&&e>i)
            swap(arr[s],arr[e]);
        s++;
        e--;


    }
}

void quickSort(int *arr,int s,int e)
{
    cout<<"Im in quicksort"<<endl;
    cout<<s<<"  "<<e<<endl;
    if(s>=e)
        return;
    int index=partition(arr,s,e);
    swap(arr,s,e,index);
    quickSort(arr,s,index-1);
    quickSort(arr,index+1,e);
}
int main()
{
    int arr[]={3,4,1,2,2,2,5};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<"  ";
    
    return 0;

}
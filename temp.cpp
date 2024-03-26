#include<iostream>
using namespace std;
int* rety ()
{
    //int i=10;
    //int arr[5]={1,2,3,4,5};
    int *arr=(int*)(calloc(5,sizeof(int)));
    arr[0]=5;
    arr[1]=53;
    arr[2]=-1;
    arr[3]=-4;
    return arr;
}
int main()
{
    int *arr;
    
    arr=rety();
    for(int i=0;i<4;i++)
    cout<<arr[i]<<" ";
}
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,1,7,4,8,2,11};
    int size=sizeof(arr)/sizeof(int);
    int j;
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                //arr[i]=arr[j];
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<"  ";
    return 0;
}
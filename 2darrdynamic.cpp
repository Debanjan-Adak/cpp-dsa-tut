#include<iostream>
using namespace std;
int main()
{
    int **arr=new int*[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=new int[6];

    }
     for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;

    }

     for(int i=0;i<5;i++)
    {
       delete []arr[i];

    }
    delete []arr;
    
    
    
    
    return 0;
}
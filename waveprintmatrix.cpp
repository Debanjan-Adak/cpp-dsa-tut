#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr,int rows,int cols)
{
    vector<int> newVect;
    for(int i=0;i<cols;i++)
    {
         
        cout<<"value of i is  "<<i<<endl;
        if(i%2==0)
        {
            for(int j=0;j<rows;j++)
            {
                cout<<"value of j is  "<<j<<endl;
                newVect.push_back(arr[j][i]);
                cout<<"value of element is  "<<arr[j][i]<<endl;
            }
        }
        else
        {
            for(int j=rows-1;j>=0;j--)
            {
                cout<<"value of j is  "<<j<<endl;
                newVect.push_back(arr[j][i]);
                cout<<"value of element is  "<<arr[j][i]<<endl;

            }
        }
    }
    return newVect;// 0123
                    //4567
}
int main()
{
    vector<vector<int>> arr={{1,2,3,4},{2,3,4,5}};
    vector<int> arr1;
    arr1=wavePrint(arr,2,4);
    for(int i:arr1)
    {
        cout<<i<<"  ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    // int num=5;
    // cout<<num<<endl;
    // cout<<&num<<endl;//address of operator: &

    // int *ptr=&num;
    // //next 2 lines are basically the same
    // num=num+1;
    // *ptr++;
    // int num[10]={0};
    // cout<<num<<endl;
    // cout<<num[0]<<endl;//gives value at 0th index wwhere as other s give the address
    // cout<<&num<<endl;
    // cout<<&num[0]<<endl;


    //array vs pointer
    double arr[10];
    double *ptr=&arr[0];
    cout<<sizeof(arr)<<endl;//total array size number of element *size of 1 element
    cout<<sizeof(ptr)<<endl;//size of pointer generally 4 or 8 bytes
    //error arr=arr+1; will give error as in symbol table arr maps to a particular address which cannot be changed

    return 0;
}
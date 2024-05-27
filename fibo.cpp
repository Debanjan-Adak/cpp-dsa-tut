#include<iostream>
using namespace std;
int fibo(int n)
{
    int val;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    val=fibo(n-1)+fibo(n-2);
    return val;

}
int main()
{
    cout<<"enter the number of terms: "<<endl;
    int n;
    cin>>n;
    int val=fibo(n);
    cout<<val;
    return 0;
}
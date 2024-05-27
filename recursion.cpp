#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    print(n-1);
}
void print1(int n)
{
    if(n==0)
    return;
    
    print1(n-1);
    cout<<n<<endl;
}
int factorial(int n)
{
    if(n==-0)
    return 1;
    
    return n*factorial(n-1);
}
int main()
{


    int n;
    cin>>n;
    //cout<<"the factorial is:  "<<factorial(n)<<endl;
    print(n);
    print1(n);
    return 0;
}
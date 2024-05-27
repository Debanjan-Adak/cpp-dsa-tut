#include<iostream>
#include<ostream>
using namespace std;
void update(int& n)// reference created
{
    n++;
}

int main()
{
    // int i=5;
    // int& j=i;// i and j point to tthe same location
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    
    // int n=5;
    // cout<<"before"<< n<<endl;
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<5;i++)
    {

        cin>>*(arr+i);
    }
    for(int i=0;i<5;i++)
    {

       cout<<*(arr+i)<<endl;
    }
   
    
  
    return 0 ; 
 
}
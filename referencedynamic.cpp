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
    
    int n=5;
    cout<<"before"<< n<<endl;
   
    
  
    return 0 ; 
 
}
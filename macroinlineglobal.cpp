#include<iostream>
using namespace std;

#define PI 3.14// THE code replaces all instances of PI in the code with value of macro before  compiling
// not modifiable 
#define min(a,b) (((a)<(b))?(a):(b))

//int j=10;//global var(bad practice)
inline int getmax(int& a,int& b)
{
    return (a>b)?a:b;
}
int main()
{
    int r=5,s=15;
    const int l=20;
    //l=5;// ERROR AS NOT MODIFIABLE
    double area = PI*r*r;

    cout<<"area is: "<<area<<endl;
    cout<<min(5,6)<<endl;
    cout<<getmax(r,s);
    return 0;
}
#include <iostream>
#include<string>
using namespace std;
int getLength(char name[])
{
    int counter=0;
    for(int i=0;name[i]!='\0';i++)
    {
        counter++;
    }
    return counter;
}
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }

}
int main()
{
    string s="De\0bu\0";
    char ch[10]={"aa\0bbaa\0"};
    
    cout<<ch<<endl;
    cout<<s<<endl;
    return 0;


}

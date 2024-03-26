#include<iostream>
using namespace std;
void replaceStr(string &str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i==' '])
        {
            cout<<str[i]<<endl;
            str[i]='0';
            //str[i]='4';
            //str[i]='%';
        }
    }
}
int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    replaceStr(str);
    cout<<str<<endl;
    return 0;
}
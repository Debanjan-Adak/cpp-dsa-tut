#include<iostream>
using namespace std;

// void print(int *p)
// {
//     cout<<*p<<endl;
// }

int main()

 {
//     int arr[5]={1,2,3,4,5};
//     char ch[6]="abcde";//null character at the end to indicate ending
//     //cout<<arr<<endl;// arr adress gets printed
//     cout<<&ch<<endl;// BUT IN THIS CASE THE content of ch gets printed!!!

//     char *c=&ch[0];


    //cout<<c<<endl;//IN THIS CASE ALSO CONTENT GETS printed
    // char temp='z';
    // char *t=&temp;
    // cout<<&temp<<endl;
    // cout<<t<<endl;//prints every location contents until it comes accross a null character
    int val =5;
    int *p=&val;
    //print(p);

    int **p2=&p;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;




    return 0;
}
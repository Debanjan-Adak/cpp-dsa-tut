#include<iostream>
using namespace std;
class Stack
{
    //properties
    public:
    int*arr;
    int top;
    int size;
    //functions
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {}
    void pop()
    {}
    void isFull()
    {}
    void isEmpty(){}
};




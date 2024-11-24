//inheritance
#include<iostream>
using namespace std;
class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }
    void setweight(int n)
    {
        this->weight=n;

    }
};
class Male: public Human{
    public:
    string color;
    void sleep()
    {
     cout<<"male sleeping"<<endl;   
    }
};
class Hybrid: public Human,public Male
{

};
int main()
{
    Male m1;
    



    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // object1.sleep();
    // cout<<object1.color<<endl;
}
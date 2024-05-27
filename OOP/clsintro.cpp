#include<iostream>
#include "Villian.cpp"//including another class present in the folder
using namespace std;
class Hero
{
    //properties
    int health;
    //private:
    char level;


    //constructor
    public:
    Hero()
    {
        cout<<"Constructor called"<<endl;
    }
    Hero(int health)
    {
        health=health;
        cout<<"this-> "<<this<<endl;
        this->health=health;

    }
   
    //getters and setters
    int getHealth()
    {
        return health;

    }
    char getLevel()
    {
        return level;

    }
    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char ch)
    {
        level=ch;
    }

    ~Hero()
    {
        cout<<"Destructor called";
    }

}h2;//static object creation

int main()
{
    Hero suresh(80);
    //copy constructor
    Hero R(suresh);// suresh values copied to R 


    // //creation of object
    // Hero h1;// static object creation
    // Villian v1;
    // Hero *h=new  Hero(80);//dynamic object creation
    // h->setLevel('B');// any one of these works
    // (*h).setLevel('B');//any one of these works
    // // cout<<"size: "<<sizeof(h1)<<endl;// size is equal to total size of all properties
    // // cout<<"size: "<<sizeof(h1)<<endl;//when class is empty size is 1 to keep tracking and rectification.
    // //cout<<"health is:"<<h1.health<<endl;
    // h1.setLevel('A');
    // cout<<h1.getLevel()<<endl;
    // h2.setHealth(89);

    
    return 0;
}
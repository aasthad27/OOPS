#include <iostream> //TOPIC 3
using namespace std;
class hero
{

public:
    int health;
    char level;
    // default constructor with no parameter and return type , inbuilt constructor (made by compiler) will not called 
    hero()
    {
        cout <<"constructor called" << endl;
     }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(int ch)
    {
        level = ch;
    }
};
int main()
{
    cout<<"before creation of object when no constructor was called"<<endl;
   hero ramesh; // during object creation static **default constructor** will invoke , with no input argumrnt and no return  type --> ramesh.hero();
   hero *h=new hero(); // dynamic object creation 
   cout<<"after creation of object and constructor called "<<endl;
}
#include <iostream> //TOPIC 4
using namespace std;
class hero
{

public:
    int health;
    char level;
    // default constructor with no parameter and return type , inbuilt constructor (made by compiler) will not called
    hero()
    {
        cout << "constructor called" << endl;
    }
    hero(int health) //parmeterised constructor 
    {
        cout<<"value stored at this"<<this<<endl; //value of this will be the address of ramesh(object)hence this is a pointer pointing to the object
     this->health=health; 
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
    cout << "before creation of object when no constructor was called" << endl;
    hero ramesh(10);        //parameterised wala called constructor
    cout<<"address of ramesh"<<&ramesh<<endl;
    hero *h = new hero(); // default constructor will be called 
    cout << "after creation of object and constructor called " << endl;
}
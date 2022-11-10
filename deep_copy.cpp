#include <iostream> //TOPIC 9
#include<string.h>
using namespace std;
class hero
{

public:
    int health;
    char level;
    char *name;
     hero(hero &temp) // copy constructor (inbuilt called like this)"&" hum pass by reference ke liye karte hai , agar pass by value karte tho copy banti and baar baar copy constructor call hota and infinite loop form kar leta, s and temp having same memory
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout << "copy constructor called" << endl; // default copy constructor haat jayega
        this->health = temp.health;
        this->level = temp.level;
    } 
    hero()
    {
        cout << "default constructor" << endl;
         name=new char[100];
    }
    hero(int health, char level) // parameterised constructor
    {
        this->health = health;
        this->level = level;
    }
   
    void print()
    {
        cout<<"name "<<this->name<<endl;
        cout << "health is " << this->health << endl;
        cout << "level is" << this->level << endl;
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
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
};
int main()
{
    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7]="AASTHA";
    hero1.setName(name);
    hero1.print();
    //let's copy hero1 in hero2
     
    hero hero2(hero1); 
       hero1.name[0]='N' ;
       hero1.print();
       hero2.print();
}
/*
default constructor
name AASTHA
health is 12
level isD
copy constructor called
name NASTHA
health is 12
level isD
name AASTHA
health is 12
level isD


here during copy constructor a whole new block with different address is created for second object to be copied , hence changes in first won't reflect in second , this is deep copy concept 
*/

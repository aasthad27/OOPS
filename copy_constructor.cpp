#include<iostream> //TOPIC 6
using namespace std;
class hero{
public:
    int health;
    char level;
    hero(hero &temp) // copy constructor (inbuilt called like this)"&" hum pass by reference ke liye karte hai , agar pass by value karte tho copy banti and baar baar copy constructor call hota and infinite loop form kar leta, s and temp having same memory 
    {
        cout<<"copy constructor called"<<endl; // default copy constructor haat jayega 
        this->health=temp.health;
        this->level=temp.level;
    }
  hero(){
    cout<<"default constructor"<<endl;
  }
  hero(int health,char level) //parameterised constructor
  {
    this->health=health;
    this->level=level;
  }
  void print()
  {
    cout<<"health is "<<this->health<<endl;
    cout<<"level is"<<this->level<<endl;
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
    health=h;
}
void setlevel(int ch)
{
    level=ch;
}
};
int main()
{
hero s(10,'a') ;
hero r(s);       // copy constructor  ,inbuilt copy constructor generates,object is passed as parameter                       
s.print(); 
r.print();
}
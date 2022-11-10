#include<iostream> //TOPIC 2
using namespace std;
class hero{


public:
    int health;
    char level;
  
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
hero *ramesh=new hero;        // dynamic                                              

ramesh->sethealth(10);
ramesh->setlevel('a');
cout << ramesh->gethealth();
cout << ramesh->getlevel();
}
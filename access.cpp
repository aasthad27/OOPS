#include<iostream> //TOPIC 1
using namespace std;
class hero{
    private:
    int health=50;
    public:
    char level;
    void print()
    {
        cout<<health<<endl;
    }
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int h) // to access the private member
    {
        health=h;

    }
  
    void setLevel(char ch) // to access  the private member 
    {
        level=ch;
    }
};
int main()
{
hero ramesh;
//cout<<ramesh.health<<endl;
cout<<ramesh.getHealth()<<endl;
ramesh.setLevel('A');
cout<<ramesh.level<<endl;
}
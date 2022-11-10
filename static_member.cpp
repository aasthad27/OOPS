#include <iostream> //TOPIC 12
using namespace std;
class hero
{

public:
 static int score;

hero()
    {
        cout << "constructor called" << endl;
    }
    ~hero() // Destructor
    {
        cout << "destructor called" << endl;
    }
};
int hero::score=10; // initialising static data member --> datatype class name :: field name
int main()
{
//hero a; // using object
//cout<<a.score<<endl;
//hero b;
//b.score=12;
//cout << a.score << endl;
//cout<<b.score<<endl;
cout<<hero::score<<endl;  // without creating object we can print directly 

}

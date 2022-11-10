// static function  --> no need of object creation , we cannot use this keyword (pointer to current object) , as no object is there , can access only static member else it will throw error 
#include <iostream> //TOPIC 13
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
    static int random() // static function
    {
        return score;
    }

};
int hero::score = 10; 
int main()
{
   
    cout << hero::score << endl;  
}

#include <iostream> //TOPIC 10
using namespace std;
class hero
{

public:
   
   
    hero()
    {
        cout << "constructor called" << endl;
    }
    ~hero() // Destructor 
    {
        cout<<"destructor called"<<endl;
    }
   
};
int main()
{
    
    hero ramesh;  // static allocaion  -->destructor called automatically    
    hero *h = new hero(); // dynamic allocation --> we have to manually call destructor --
                                                                                    //   |
    delete h;                                                                       //  <-
}
/*
output
constructor called
constructor called
destructor called
destructor called

destructor  will free up the memory occupied by object when it's scope is over ;) 
*/
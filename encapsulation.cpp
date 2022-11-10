#include<iostream>
using namespace std;
class imp_encapsulation
{
    private:
    int a;
    public:
    void set(int x)
    {
        a=x;
    }
    int get(){
        return a;
    }
};
int main()
    {
   imp_encapsulation obj;
   obj.set(10);
   cout<<obj.get();
   return 0;
    }                      
    /*
    Encapsulation is the process or method to contain the information. Encapsulation is a method to hide the data in a single entity or unit along with a method to protect information from outside world. This method encapsulates the data and function together inside a class which also results in data abstraction.
    In the this program, the variable a is made private so that this variable can be accessed and manipulated only by using the methods get() and set() that are present within the class. Therefore we can say that, the variable a and the methods set() as well as get() have binded together that is nothing but encapsulation.
    */
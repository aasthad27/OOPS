#include<iostream> // implementing abstraction 
using namespace std;
class  imp_abs{
    private:
    int a,b;
    public:
   void set(int x,int y)
   {
      a=x;
      b=y;
   }
    void display()
    {
       cout<<a;
       cout<<b; 
    }

    
};
int main()
{
imp_abs obj;
obj.set(10,20);
obj.display();
}
/*
In OOPs, Abstraction is the method of getting information where the information needed will be taken in such a simplest way that solely the required components are extracted, and also the ones that are considered less significant are unnoticed. The concept of abstraction only shows necessary information to the users. It reduces the complexity of the program by hiding the implementation complexities of programs
*/
// as we can see we can't access the variables a and b directly this is due to abstraction
/* adv of abstraction 
--> use to write low level code
--> code duplicate and inc reusability
--> internal implementation can be changed without affecting the user
--> inc the security 

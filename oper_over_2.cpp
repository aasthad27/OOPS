#include<iostream> // uniary
using namespace std;
class weight{
    private:
    int kg;
    public:
    weight()
    {
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void printweight()
    {
        cout<<"weight in kg :"<<kg<<endl;
    }
    void operator ++() // we do not pass any arguments as it is uniary operator 
    {
        ++kg;
    }
       void operator ++(int) // to differentiate
    {
        kg++;
    }
    void operator --() // we do not pass any arguments as it is uniary operator
    {
        --kg;
    }
    void operator --(int) // to differentiate
    {
        kg--;
    }
};
int main()
{
    /*int x=0;
    ++x;
    cout<<x; */
    weight obj;
    ++obj;  // obj.operator ++() -->compiler treates
    //error -->operator overloading -->pre
    obj.printweight();
   obj++;// -->post
   obj.printweight();
   --obj;
   obj.printweight();
   obj--;
   obj.printweight();
   /*weight obj1,obj2;
   obj2=++obj1; */ //-->error as we have to define a return type of weight type which will store in obj2
   return 0;
}
/*
output
weight in kg :1
weight in kg :2
weight in kg :1
weight in kg :0
*/
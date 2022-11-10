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
    weight operator ++() 
    {
        weight temp;
        temp.kg=++kg;
        return temp;
    }
       weight operator ++(int) 
    {
        weight temp;
        temp.kg=kg++;
        return temp;
    }
    weight operator --() 
    {
        weight temp;
        temp.kg=--kg;
        return temp;;
    }
    weight operator --(int) 
    {
        weight temp;
        temp.kg=kg--;
        return temp;
    }
};
int main()
{
   
   weight obj1,obj2;
   obj2 = ++obj1;  
   obj2.printweight();
   obj2 =obj1++;
   obj2.printweight();
   obj2 = --obj1;
   obj2.printweight();
   obj2= obj1--;
   obj2.printweight();
   return 0;
}
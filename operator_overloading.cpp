#include<iostream> // binary operater
using namespace std;
class complex{
    private:
    int real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator +(complex c) //special function -->operator overloading syntax -->return type followed by operator keyword followed by operator itself -->argument passed is optional 
    {
        complex temp;
        temp.real=real+c.real; // c1 is object->real , c2 is passed so can be accessed using object only -->c.real
        temp.img=img+c.img;
        return temp;
    }
};
int main()
{
    complex c1(5,4);
    complex c2(2,5);
    complex c3;
    c3=c1+c2; //c3=c1.add(c2)-->how compiler treats
     // error , they won't operate on objects directly,(user define objects),we have to overload this operator
     c3.print();
/* int x=5;
 int y=4;
 int z=x+y; // here works as it is primitive datatype
 cout<<"z"<<z<<endl; */
}
#include<iostream>  // 
using namespace std;
class num{
    public:
    int a;
    num(int s)
    {
        a=s;

    }
    num()
    {

    }
 friend num operator ++ (num &obj1);
void print()
{                         
cout<<a;
}

};
num operator ++(num &obj1)
{
  num obj2;
  obj2=++obj1.a;
  return obj2;
}
 int main()
 {
num o1(5);
num o2;
o2= ++o1;
o2.print();                     
 }
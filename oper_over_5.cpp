#include<iostream> // unary with friend function 
using namespace std;
class num{
    public:
    int a;
    num(int s)
    {
        a=s;
    }
    friend void operator-(num &);

};
void operator-(num &obj)
{
  obj.a--;
  cout<<obj.a<<endl;
}
int main()
{
num o1(5);
-o1;
}
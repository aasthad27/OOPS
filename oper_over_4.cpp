#include<iostream> // without friend function
using namespace std;
class num{
    public:
    int a;
   
    num(int s)
    {
        a=s;
      
    }
    void operator -()
    {
       a--;
       cout<<a<<endl;
    }
};
int main()
{
num o1(5);
-o1;

}
//output-->4
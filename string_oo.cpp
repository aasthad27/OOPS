#include<iostream>
#include<string.h>
using namespace std;
class str{
    public:
    string a;

   
    str()
    {
        a=" ";
    
    }
    void input()
    {
        cin>>a;
    }


    
    //void operator +(str &);
    void operator +(str obj)
    {
    
     cout<<a+obj.a;
 
    }
   
};
int main()
{
str o1,o2;
o1.input();
o2.input();
o1+o2;

}
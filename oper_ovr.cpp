#include<iostream> // without operator overloading 
using namespace std;
class word{
public:
string a ;
string b;
word( string s, string m)
{
    a=s;
    b=m;
}
void concat()
{
    string c;
    c=a+b;
    cout<<c;
}
};
int main()
{
word obj("hello","world");
obj.concat();
}
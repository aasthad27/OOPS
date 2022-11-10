#include<iostream>
using namespace std;
class complex{
    public:
    int r,i;
    complex(int s,int q){
         r=s;
         i=q;
    }
    complex()
    {
        
    }
    complex operator +(complex o)
    {
        complex z;
        z.r=r+o.r;
        z.i=i+o.i;
        return z;
    }
    complex operator -(complex o)
    {
        complex z;
        z.r = r - o.r;
        z.i=i-o.i;
        return z;
    }
    void operator ==(complex o)
    {
       if(r==o.r && i==o.i)
       {
        cout<<"equal"<<endl;
       }
       else{
        cout<<"not equal"<<endl;
       }
    }
void display()
{
    cout<<r<<"+"<<"i"<<i<<endl;
}
};
int main()
{
 complex o1(2,3);
 complex o2(3,4);
 complex o3;
 o3=o1+o2;
 o3.display();
 o3=o1-o2;
 o3.display();
 o1==o2;
}
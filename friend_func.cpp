#include<iostream>
using namespace std;
// 1+4i
//5+8i
//6+12i
class complex{
    int a,b;
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    //below line-->sumcomplex is now allowed to access the data members of of complex class ("They becomes friends")
    friend complex sumcomplex(complex o1,complex o2); // declaration 
    void printnumber(){
        cout<<"your number is "<<a<<"+"<<" "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));  // wait what , accessing the data members of complex class can't be possible for that we have to make a declaration of friend func ,in order to access it 
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.printnumber();
    c2.printnumber();
    sum=sumcomplex(c1,c2);
    sum.printnumber();
}
/*
your number is 1+ 4i
your number is 5+ 8i
your number is 6+ 12i
*/
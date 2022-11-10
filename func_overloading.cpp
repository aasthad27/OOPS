#include <iostream> // func _overloading
using namespace std;
int area(int);
int area(int, int);
float area(float);
float area(float, float);
int area(int s)
{
    return (s * s);
}
int area(int l, int b)
{
    return (l * b);
}
float area(float r)
{
    return (3.14 * r * r);
}
float area(float bs, float ht)
{
    return ((bs * ht) / 2);
}
int main()
{
    int s, l, b;
    float r, bs, ht;
    cin >> s;        // side of square
    cin >> l >> b;   // length bredth
    cin >> r;        // radius
    cin >> bs >> ht; // base and height
    cout << area(s);
    cout << area(l, b);
    cout << area(r);
    cout << area(bs, ht);
}
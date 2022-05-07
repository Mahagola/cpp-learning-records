#include <iostream>
using namespace std;
class base
{
public:
    virtual void area() = 0; // pure virtual function-->abstract class//
};
class derived1 : public base
{
public:
    int r;
    void area()
    {
        cout << "enter radius: " << endl;
        cin >> r;
        cout << "area of circle is : " << ((22 / 7) * r * r) << endl;
    }
};
class derived2 : public base
{
public:
    int l, b, h;
    
    void area()
    {
        cout << "enter l,b & h " << endl;
        cin >> l >> b >> h;
        cout << "area of rectangle is: " << (l * b * h) << endl;
    }
};
int main()
{
    base *p;
    derived1 s1;
    derived2 s2;

    p = &s1;
    p->area();
    p = &s2;
    p->area();
    return 0;
}
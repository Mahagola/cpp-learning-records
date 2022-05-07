#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << endl;
        cout << b << endl;
    }
};
class B : public A // single inheritence//
{
    int c;

public:
    B(int p, int q, int r) : A(p, q)
    {
        c = r;
        cout << c << endl;
    }
};
int main()
{

    B(10, 20, 39);
}
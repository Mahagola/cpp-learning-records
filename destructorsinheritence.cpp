#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A(int x)
    {
        a = x;

        cout << a << endl;
    }
    ~A()
    {
        cout << "A destructed " << endl;
    }
};
// single inheritence//
class B : public A
{
    int l, m;

public:
    B(int p, int q, int r) : A(r)
    {
        l = p;
        m = q;
        cout<<l<<endl<<m<<endl;
    }
};
int main()
{
    B(4, 5, 6);
    return 0;
}
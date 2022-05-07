#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnum(int d1, int d2)
    {
        a = d1;
        b = d2;
    }
    void getcomplex()
    {
        cout << "your complex num is: " << a << "+" << b << "i" << endl;
    }
    friend complex sumcomplex(complex p1, complex p2);
};
complex sumcomplex(complex p1, complex p2)
{
    complex p3;
    p3.setnum((p1.a + p2.a), (p1.b + p2.b));
    return p3;
}
int main()
{
    complex t1, t2, t3;
    t1.setnum(2, 3);
    t1.getcomplex();
    t2.setnum(3, 2);
    t2.getcomplex();
    t3 = sumcomplex(t1, t2);
    t3.getcomplex();
    return 0;
}
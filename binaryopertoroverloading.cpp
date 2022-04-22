#include <iostream>
using namespace std;
class complex
{
    int x;
    int y;

public:
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex()
    {
        x;
        y;
    };

    void display()
    {
        cout << "sum of complex num is :" << x << "+" << y << "i" << endl;
    }
    friend complex operator+(complex &t, complex&p);
};
complex operator+(complex &t, complex &p)
{
    complex temp;
    temp.x = t.x + t.y;
    temp.y = p.x + p.y;
    return temp;
}

int main()
{
    complex S1(5, 6), S2(2,3), s3;
    s3=S1+S2;
    s3.display();
    return 0;
}
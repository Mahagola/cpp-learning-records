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
    temp.x = t.x + p.x;
    temp.y = t.y + p.y;
    return temp;
}

int main()
{    
    complex S1(45,65);
    complex S2(32,65);
    complex s3;
    
    complex *ptr1=&S1;
    complex *ptr2=&S2;
    complex *ptr3=&s3;
    

   (ptr3)s3->(ptr1)S1->(45,65) + (ptr2)S2->(32,65);
    
    s3.display();
    return 0;
}
#include <iostream>
using namespace std;
class sum
{
    int a;
    int b;

public:
    sum()
    {
    }
    sum(int x)
    {
        a = x + 2;
        b = x + 5;
    }
    void display()
    {
        cout << a << endl
             << b;}
    };

    int main()
    {
        sum obj;
        int p = 5;
        obj = p;
        obj.display();
        return 0;
    }
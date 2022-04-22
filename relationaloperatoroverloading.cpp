#include <iostream>
using namespace std;
class Binary
{
    int x;

public:
    Binary(int p)
    {
        x = p;
    }
    Binary()
    {
        x;
    };

    int operator<(Binary &c);
    int operator>(Binary &d);
};
int Binary::operator<(Binary &c)
{
    if (x < c.x)
    {
        return 1;
    }
    else
        return 0;
}
int Binary::operator>(Binary &d)
{
    if (x > d.x)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    Binary S1(5), S2(9);
    if (S2 < S1)
    {
        cout << "s2 is less than s1. " << endl;
    }
    else
    {
        cout << "s1 is less than s2. " << endl;
    }
    if (S2 > S1)
    {
        cout << "s2 is greater than s1. " << endl;
    }
    else
    {
        cout << "s1 is greater than s2. " << endl;
    }

    return 0;
}
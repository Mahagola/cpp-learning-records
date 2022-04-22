#include <iostream>
using namespace std;
class point
{
    int x;
    int y;

public:
    point() : x(5), y(7)
    {
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    point p;
    cout << "x= " << p.getX() << ", y= " << p.getY() << endl;
    return 0;
}
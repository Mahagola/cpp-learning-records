#include <iostream>
using namespace std;
// vol. of cuboid
int volume(int a, int b, int c)
{
    return (a * b * c);
}
// vol. of sphere
double volume(int a)
{
    return (4/3 * 3.14 * a * a * a);
}
// vol. of cylinder
double volume(int r, int h)
{
    return (3.14 * r * r * h);
}
int main()
{
    cout << "the volume of cuboid is :" << volume(2, 4, 6) << endl;
    cout << "the volume of cylinder is :" << volume(4, 6) << endl;
    cout << "the volume of sphere is :" << volume(2) << endl;
    return 0;
}
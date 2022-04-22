#include <iostream>
using namespace std;
int main()
{
    int a = 54;
    int &b = a;
    cout << b << endl;
    cout << a << endl;
    float f = 769;
    float &j = f;
    cout << j;
}
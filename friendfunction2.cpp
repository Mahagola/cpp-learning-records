#include <iostream>
using namespace std;

class calculate;
class evaluate
{
public:
    int product(calculate, calculate);
    int divide(calculate, calculate);
};
class calculate
{
    int a;
    int b;
    friend evaluate;

public:
    void setnum(int f1, int f2)
    {
        a = f1;
        b = f2;
    }
    void printnum()
    {
        cout << "the entered numbers are: " << a << " & " << b << endl;
    }
};
int evaluate::product(calculate o1, calculate o2)
{
    return (o1.a * o2.a);
}
int evaluate::divide(calculate o1, calculate o2)
{
    return (o1.a / o2.a);
}
int main()
{
    calculate o1, o2,o3;
    o1.setnum(7, 9);
    o1.printnum();
    o2.setnum(5, 6);
    o2.printnum();

    evaluate p3;
    int ans = p3.product(o1, o2);
    cout << "The product of entered numbers are: " << ans << endl;
    evaluate p4;
    int ans2 = p4.divide(o1, o2);
    cout << "The div. of entered numbers are: " << ans2 << endl;

    return 0;
}
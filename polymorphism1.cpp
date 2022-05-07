#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "base" << endl;
    }
};
class derived : public base
{
    void show()
    {
        cout << "derived" << endl;
    }
};
int main()
{
    base *p, d;
    derived s1;
    p = &d;
    p->show();
    p = &s1;
    p->show();
    return 0;
}
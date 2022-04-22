#include <iostream>
using namespace std;
class a
{
    int p;

public:
    void get_p(int s)
    {
        p = s;
    }
    protected:
    void put()
    {
        cout << "value of p is: " << p << endl;
    }
};
class q
{
    int r;

public:
    void get_r(int t)
    {
        r = t;
    }
    protected:
    void put()
    {
        cout << "value of r is:  " << r << endl;
    }
};
class l : public a, public q
{
public:
    void show_data()
    {
        a::put();
        q::put();
    }
};
int main()
{
    l obj;
    obj.get_p(800);
    obj.get_r(800);
    obj.show_data();
}
#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << endl;
        cout << b << endl;
    }
};
// multiple inheritence//
class B
{
    int c;

public:
    B(int p)
    {
      c=p;
      cout<<c<<endl;
    }
};
class C:public A,public B
{   int l;
    public:
    C(int u,int v,int w,int o):A(u,v),B(w){
        l=o;
        cout<<o<<endl;
    }

};
int main()
{
C(1,2,3,4);
return 0;
}
#include <iostream>
using namespace std;
template <class p1, class p2>
class C1
{
    p1 x;
    p2 y;

public:

    C1(p1 n, p2 m)
    {
        x = n;
        y = m;
        cout << this->x<<endl<<this->y<<endl;
    }
};
int main(){
    C1<char,float>obj('A',4.5);
    return 0;
}
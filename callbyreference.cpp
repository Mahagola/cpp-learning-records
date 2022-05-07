#include <iostream>
using namespace std;
// Call by reference
void pointerswap(int *a, int *b)
{
    int c = *a;
   *a = *b;
    *b = c;
}
int & referencevar(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
    return a;
}
int main()
{
    int x = 4;
    int y = 7;
    cout << "without swapping x=" << x << "and value of b=" << y << endl;
    referencevar(x,y)=35;//swapping using reference var

   // cout << "without swapping x=" << x << "and value of b=" << y << endl;
   //pointerswap(&x,&y);//swapping using pointer reference 

    cout << "after swapping the numbers we get x=" << x << "and value of y=" << y << endl;
    return 0;
}
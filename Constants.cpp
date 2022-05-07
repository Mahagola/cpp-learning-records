#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int a = 34;
    cout << "The value of a was: " << a;
    a=89; //getting error, as a is declared as a const.
    cout << "The value of a is: " << a;
    return 0;
}
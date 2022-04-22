#include <iostream>
using namespace std;
int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 6;
    int *b = &a;
    // & ---> (Address of) Operator
    cout << "the address of a is :" << b << endl;
    cout << "the address of a is :" << &a << endl;
    // * ---> (value at) Dereference operator
    cout << "the value of a is :" << *b << endl;
    return 0;
}
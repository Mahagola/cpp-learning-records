#include <iostream>
using namespace std;
//Call by value
void swap(int a, int b)//this will not swap numbers, for swapping use callbyreference.
{
    int c = a;
    a = b;
    b = c;
}
int main()
{
    int x = 4;
    int y = 7;
    cout << "without swapping the numbers we get a :" << x << "and value of b:" << y << endl;
    swap(x, y);//this will not swap numbers.
{
    cout << "after swapping the numbers we get a :" << x << "and value of b:" << y << endl;
    return 0;
}
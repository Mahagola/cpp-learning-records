#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter ur age:" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible to vote";
    }
    else if ((age == 18)||age==19)
    {
        cout << "wait for 1 year";
    }
    else
    {
        cout << "you are eligible to vote";
    }
    return 0;
}

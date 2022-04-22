#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 25:
        cout << "Your age is 25" << endl;
        break;
    case 76:
        cout << "Your age is 76" << endl;
        break;
    case 22:
        cout << "Your age is 22" << endl;
        break;
    case 75:
        cout << "Your age is 75" << endl;
        break;

    default:
        cout << "not any cases" << endl;
        break;
    }
    cout << "Done with switch case" << endl;
    return 0;
}
#include <iostream>
using namespace std;
class student
{
    int s1;
    int s2;

public:
    student()
    {
        s1 = 56;
        s2 = 65;
    }
    void show()
    {
        cout << "marks are: " << s1 << endl;
        cout << "marks are: " << s2 << endl;
    }
};
main()
{
    student p1, p2;
    cout << "details of 1st student: " << endl;
    p1.show();
    cout << "details of 2nd student: " << endl;
    p2.show();
};

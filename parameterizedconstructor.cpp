#include <iostream>
using namespace std;
class student
{
    int s1;
    int s2;

public:
    student(int a,int b)
    {
        s1 = a;
        s2 = b;
    }
    void show()
    {
        cout << "marks are: " << s1 << endl;
        cout << "marks are: " << s2 << endl;
    }
};
main()
{
    student p1(23,50), p2(12,45);
    cout << "details of 1st student: " << endl;
    p1.show();
    cout << "details of 2nd student: " << endl;
    p2.show();
};

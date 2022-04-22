
#include <iostream>
using namespace std;
class student
{
    int s1;
    int s2;

public:
    student(int a, int b)
    {
        s1 = a;
        s2 = b;
    }
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
    student o1(23, 50),o2;
  
    cout << "details of 1st student: " << endl;
    o1.show();
    cout << "details of 2nd student: " << endl;
    o2.show();
};

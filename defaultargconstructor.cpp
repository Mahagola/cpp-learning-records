
#include <iostream>
using namespace std;
class student
{
    int s1;
    int s2;

public:
    student(int a, int b=80)
    {
        s1 = a;
        s2 = b;
    }
    student()
    {
        s1 = 56;
        s2 = 65;
    }
    student(student &obj)
    {
      s1=obj.s1;
      s2=obj.s2;
    }
    void show()
    {
        cout << "marks are: " << s1 << endl;
        cout << "marks are: " << s2 << endl;
    }
};
main()
{
    student s1(12),s2,s3(s1);
  
    cout << "details of 1st student: " << endl;
    s1.show();
    cout << "details of 2nd student: " << endl;
    s2.show();
    cout << "details of 3rd student: " << endl;
    s3.show();
};

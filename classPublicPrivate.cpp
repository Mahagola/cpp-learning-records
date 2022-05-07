#include <iostream>
using namespace std;

class student
{
public:
    int salary;
    string Name;
    void getData(int a1, char b1);
    void details()
    {

        cout << "Name of student is:" << Name << endl;
        cout << "salary of student is:" << salary << endl;
        cout << "age of student is:" << age << endl;
        cout << "grade of student is:" << grade << endl;
    }

    

private:
    int age;
    char grade;
    
};
void student::getData(int a1, char b1)
{
    age = a1;
    grade = b1;
}
int main()
{
    student info;
    info.getData(19, 'A');
    info.salary = 70000;
    info.Name = "Suryansh";
    info.details();
    return 0;
}

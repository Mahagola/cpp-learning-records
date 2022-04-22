#include <iostream>
using namespace std;
struct info
{
    string name;
    int age;
   string course;
}g1;    //g1 is global structure variable here
main()
{


  
    cout << "Enter nameof student 1\n";
    cin>> g1.name;
    cout<<"Enter age of student 1\n";
    cin>> g1.age;
    cout<<" Enter courseof student 1\n";
    cin>> g1.course;

    cout<<"\nDisplaying info of student 1";
    cout<<"\nName of student 1"<<g1.name;
    cout<<"\nAge of student 1\n"<<g1.age;
    cout<<"\nCourse of student 1:\n"<<g1.course;

    info g2;
    cout << "\nEnter name of student 2:";
    cin>> g2.name;
    cout<<"Enter age of student 2:\n";
    cin>> g2.age;
    cout<<"Enter course of student 2:\n";
    cin>> g2.course;

    
    cout<<"\nDisplaying info of student 2\n";
    cout<<"\nNameof student 2\n"<<g2.name;
    cout<<"\nAge of student 2"<<g2.age;
    cout<<"\nCourseof student 2:"<<g2.course;



}
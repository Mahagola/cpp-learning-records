#include<iostream>
using namespace std;
struct student
{
    int age;
    float height;
    char grade;
};
int main()
{
struct student Mohan;
struct student Sudheer;
Mohan.age=32;
Mohan.grade='B';
Mohan.height=5.7;

Sudheer.age=15;
Sudheer.grade='E';
Sudheer.height=34.3;
cout<<"age of Mohan is:"<<Mohan.age<<endl;
cout<<"grade of Mohan is:"<<Mohan.grade<<endl;
cout<<"height of Mohan is:"<<Mohan.height<<endl;

cout<<"age of Sudheer is:"<<Sudheer.age<<endl;
cout<<"grade of Sudheer is:"<<Sudheer.grade<<endl;
cout<<"height of Sudheer is:"<<Sudheer.height<<endl;


return 0;
}
#include<iostream>
using namespace std;
class student{
int age;
int show;
static int num1;
public:
void input(void){
    cout<<"enter the age of student "<<endl;
    cin>>age;
    num1++;
}
void display(void){
    cout<<"the age of student "<<num1<< " is: " <<age<<endl;
}



};
int student::num1;
int main(){
student age[5];
for (int i = 0; i < 6; i++)
{
    age[i].input();
    age[i].display();
}
return 0;


}
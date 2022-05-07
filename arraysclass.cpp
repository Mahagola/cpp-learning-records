#include<iostream>
using namespace std;
class Student
{
int studentId[50];
int studentRoll[50];
int increment;
public:

void startwith(void);
void studentDet(void);
void studentDisplay(void);

};
void Student::startwith(){
    increment=0;
}
void Student::studentDet(void){
    cout<<"enter the id of the student:"<<increment<<endl;
    cin>>studentId[increment];

    cout<<"enter the roll of the student:"<<increment<<endl;
     cin>>studentRoll[increment];
     increment ++;

}
void Student::studentDisplay(){
    for (int i = 0; i < increment; i++)
    {
        cout<< " The roll of student id "  << studentId [i] << " is :" <<studentRoll[i];
        cout<<endl;
    }
    
}
int main()
{
Student info;
info.startwith();
info.studentDet();
info.studentDet();
info.studentDet();
info.studentDet();
info.studentDet();
info.studentDisplay();
return 0;


}
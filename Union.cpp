#include<iostream>
using namespace std;
typedef union human
{
    int age;
    char gender;
    float temp; 
}h;
int main()
{
 h goku;
 goku.gender='F';
 goku.age=23;
 cout<<"gender of goku is:"<<goku.gender<<endl;
 cout<<"age of goku is:"<<goku.age<<endl;
 return 0;


}
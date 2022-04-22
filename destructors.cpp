#include<iostream>
using namespace std;
class student{
    public:
student (){
    cout<<"constructor: obj created "<<endl;
}
~student(){
    cout<<"Destructor: obj destroyed "<<endl;
}
};
int main (){
    cout<<"In main function"<<endl;
    student s1;{
    cout<<"in s1 block "<<endl;
     student s2;
     student s3;
    }
    cout<<"outside main function "<<endl;
    return 0;

    
}
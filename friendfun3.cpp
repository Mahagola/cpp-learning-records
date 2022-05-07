#include<iostream>
using namespace std;
class B;
class A{
string info1;
public:
void firstname(string n1){
    info1=n1;
    cout<<"your firstname is: "<<n1<<endl;
}
friend void fullname(A,B);
};
class B{
string info2;
public:
void lastname(string n2){
    info2=n2;
    cout<<"your last name is : "<<info2<<endl;
    
}
friend void fullname(A,B);
};
void fullname(A o1,B o2){
    cout<<"your full name is: "<<o1.info1 <<o2.info2<<endl;
}
int main(){
A e1;
e1.firstname("suryansh");
B e2;
e2.lastname("yadav");
fullname(e1,e2);
return 0;
}
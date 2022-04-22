#include<iostream>
using namespace std;
class A{
public:
void func(){
    cout<<"function A"<<endl;
}
protected:
void info(){
    cout<<"hello world! "<<endl;
}
};
class B:public A{

};
class C:public A{
    public:
    void display(){
    cout<<"This is multiple inheritence "<<endl;
}
};
int main(){
    B b1,b2;
    b1.func();
    C c;
    c.display();
    c.func();

   return 0;
}
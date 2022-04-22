#include<iostream>
using namespace std;
class base{
int a;
public:
int b;
int getdata1(){
    return a;
}
int getdata2(){
    return b;
}
void setdata(){
    a=10;
    b=50;
}
};
class derived:public base{
int c;
public:
void process(){
    c=getdata1()*b;
}
    void display()
    {
        cout<<"first value "<<getdata1()<<endl;
        cout<<"second value "<<getdata2()<<endl;
        cout<<"product is: "<<c<<endl;
    }

};
int main(){
    derived p;
    p.setdata();
    p.process();
    p.display();
    return 0;

}
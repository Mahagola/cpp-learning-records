#include<iostream>
using namespace std;
class base{
public:
base(){
    cout<<"constructing base "<<endl;

}
virtual ~base(){
    cout<<"destructing base"<<endl;
}
};
class derive:public base{
public:
derive(){
    cout<<"constructing derive "<<endl;

}
virtual ~derive(){
    cout<<"destructing derive"<<endl;
}
};
main(){
    base*t=new derive;
    delete t;
}
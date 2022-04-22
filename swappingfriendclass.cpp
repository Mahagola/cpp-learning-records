#include<iostream>
using namespace std;
class b;
class a
{
    int i1;
    public:
    void val1(int v1){
        i1=v1;
       
    }
    void display1(void){
        cout<<"first value: "<<i1<<endl;
    }
    friend void swapp(a&,b&);
};
class b
{
    int i2;
    public:
    void val2(int v2){
        i2=v2;
    }
    void display2(void){
         cout<<"second value:"<<i2<<endl;
    }
    friend void swapp(a&,b&);
};
void swapp(a & s1, b & s2)
{
int r=s1.i1;
s1.i1=s2.i2;
s2.i2=r;
}
int main(){
    a p1;
    b p2;
    cout<<"before swapping, sequence are: "<<endl;
    p1.val1(43);
    p1.display1();
    p2.val2(65);
    p2.display2();
    swapp(p1,p2);
    cout<<"after swapping,sequence are: "<<endl;
    p1.display1();
    p2.display2();
    return 0;
}
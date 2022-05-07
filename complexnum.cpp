#include<iostream>
using namespace std;
class complex{
int a;
int b;
public:
void setcomplex(int b1, int b2){
 a = b1;
 b = b2;
}
void setbysum(complex c1,complex c2){
     a=c1.a+c2.a;
     b=c1.b+c2.b;
}
void outcomplex(){
    cout<<"the complex num is "<<a<<" +"<<b<<"i"<<endl; 
}
};
int main()
{
complex n1,n2,n3;
n1.setcomplex(4,5);
n1.outcomplex();

n2.setcomplex(2,3);
n2.outcomplex();

n3.setbysum(n1,n2);
n3.outcomplex();

return 0;


}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=34;
int b=45;
int c=535;
cout<<"value of a with setw is :"<<setw(6)<<a<<endl;
cout<<"value of b with setw is :"<<setw(6)<<b<<endl;
cout<<"value of c with setw is :"<<setw(6)<<c<<endl;

cout<<"value of a without setw is :"<<a<<endl;
cout<<"value of b without setw is :"<<b<<endl;
cout<<"value of c without setw is :"<<c<<endl;

return 0;
}
#include<iostream>
using namespace std;
int c=131;
int main()
{
int a,b,c;
cout<<"enter a:"<<endl;
cin>>a;
cout<<"enter b:"<<endl;
cin>>b;
c=a+b;
cout<<"sum is:"<<c<<endl;
cout<<"the global value of c:"<<::c<<endl;
return 0;
}
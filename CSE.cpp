#include<iostream>
using namespace std;
int main(){
void *p;
int a=19;
float b=43.4;
char c='e';
p=&a;
cout<<*(int*)p<<endl;
p=&b;
cout<<*(float*)p<<endl;
p=&c;
cout<<*(char*)p<<endl;
return 0;
}
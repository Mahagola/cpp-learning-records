#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
int num1,num2;
cout<<"Enter number one:"<<endl;
cin>>num1;
cout<<"Enter number two:"<<endl;
cin>>num2;
cout<<"sum is :"<<sum(num1,num2)<<endl;
return 0;
}
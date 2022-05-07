#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int number;
    cout<<"Enter the table of:"<<endl;
    cin>>number;
    cout<<"Table of the entered no. is:"<<endl;
do
{
    cout<<number <<"*"<<i<<"="<<number*i<<endl;
    i++;
} while (i<=10);

return 0;
}
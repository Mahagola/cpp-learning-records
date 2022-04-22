#include<iostream>
using namespace std;
class rectangle
{
public:
int L;
void get()
{
cout<<"Enter the length ";
cin>>L;
cout<<"Enter the breadth ";
cin>>B;
put();
}
int B;
void put()
{
cout<<"Area of rectangle= "<<L*B;
}
};
main()
{
rectangle ob;
ob.get();
}
#include<iostream>
using namespace std;
int kmtom(int km, int m=1000)
{
    return km*m;
}
int main()
{
int num;
cout<<"enter the number in km:"<<endl;
cin>>num;
cout<<num<<"in meters is:"<<kmtom(num)<<endl;
return 0;

}
#include<iostream>
using namespace std;
int main(){
    int m,n;
    int sum=0;
    int *p;
    cout<<"how many numbers you want to add ? "<<endl;
    cin>>m;
    p= new int[m];
    for (int n = 0; n < m; n++)
    {
        cout<<"enter number "<<endl;
        cin>>p[m];
    }
    for (int n = 0; n < m; n++)
    {
        sum+=p[m];
    }
    cout<<"the sum of arrays is : "<<sum<<endl;
}
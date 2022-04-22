#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class CI
{
    int principal;
    float interest;
    int months;
    float returnVal;

public:
    CI(){};
    CI(int p, int m, int r);
    CI(int p, int m, float r);
    void show();
};
CI::CI(int p, int m, float r)
{
    principal = p;
    interest = r;
    months = m;
    returnVal = principal;
    for (int i = 0; i < m; i++)
    {
        returnVal = returnVal * (1 + interest);
    }
}
CI::CI(int p, int m, int r)
{
    principal = p;
    interest = float(r) / 100;
    months = m;
    returnVal = principal;
    for (int i = 0; i < m; i++)
    {
        returnVal = returnVal*(1 + interest);
    }
}

void CI :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<months
        << " months is "<<returnVal<<endl;;
}
int main()
{
    CI o1, o2,o3;
    int p,m;
    float r;
    int r2;
    cout << "enter principal amount, months & float interest rate " << endl;
    cin >> p >> m >> r;
    o1 = CI(p, m, r);
    o1.show();

    cout << "enter principal, months & int interest rate " << endl;
    cin >> p >> m >> r2;
    o2 = CI(p, m, r2);
    o2.show();
  

    return 0;
}
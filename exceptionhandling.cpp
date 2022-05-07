#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter values of a & b : "<<endl;
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0){
            cout<<"result(a/x)= "<<a/x<<endl;
        }
        else {
            throw(x);
        }

    }
    catch(int p){
        cout<<"exception caught: x= "<<x<<endl;
    }
    return 0;
}
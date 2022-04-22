#include<iostream>
using namespace std;
int main(){
    int a= 40;
    int *g= &a;
    cout<<"value of a is = "<<*g<<endl;
    cout<<"address of a is = "<<g<<endl;
    cout<<"address of a is = "<<&a<<endl;
    int *h= new int(50);
    cout<<"value of h is "<<*h<<endl;
    int *arry= new int[5];
    arry[0]=34;
    arry[1]=65;
    arry[2]=23;
    arry[3]=72;
    arry[4]=391;
    // delete[] arry;
    cout<<" array[4]= "<<arry[4]<<endl;
    cout<<" array[3]= "<<arry[3]<<endl;
    cout<<" array[2]= "<<arry[2]<<endl;
    cout<<" array[1]= "<<arry[1]<<endl;
}
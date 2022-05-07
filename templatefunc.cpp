#include<iostream>
using namespace std;
template<class U1,class U2,class U3>
void product(U1 a,U2 b,U3 c){
    cout<<"product is "<<a*b*c<<endl;
}
int main(){
    int a;
    float b;
    int c;
    product(2, 4.5 ,5);
    return 0;
}

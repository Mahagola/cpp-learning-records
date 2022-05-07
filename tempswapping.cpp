 #include<iostream>
 using namespace std;
 template<class T1,class T2>
 void swapp(T1&a,T2&b,){
     T1 temp=a;
     a=b;
     b=temp;

     T2 temp2=a;
     a=b;
     b=temp2;
 }
 int main(){
    int x=9;
    float y=4.6;
    float z=6.7;
     cout<<"before swapping numbers are: "<<x<<" & "<<y<<endl;
     swapp(x,y,z);
     cout<<"after swapping numbers are: "<<x<<" & "<<y<<endl;
     return 0;
 }
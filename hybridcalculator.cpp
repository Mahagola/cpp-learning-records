#include<iostream>
#include<math.h>
using namespace std;
class simpleCalc{
int a;
public:
int b;
void setval1(int n1,int n2){
    a=n1;
    b=n2;
}
void display1(void){
    cout<<"sum is : "<<a+b<<endl;
    cout<<"product is : "<<a*b<<endl;
    cout<<"divison is : "<<a/b<<endl;
    cout<<"subtraction is : "<<a-b<<endl;
}

};
class scientificCalc{
  int c;
  public:
  void setval2(int p){
      c=p;
  }
  void display2(void){
      cout<<"sin of "<<c<<"is "<<sin(c)<<endl;
      cout<<"tan of "<<c<<"is "<<tan(c)<<endl;
      cout<<"cos of "<<c<<"is "<<cos(c)<<endl;
    
  }
};
class hybridCalc:public simpleCalc,public scientificCalc{
  
};
int main(){
    hybridCalc obj1,obj2;
    obj1.setval1(50,10);
    obj2.setval2(45);
    obj1.display1();
    obj2.display2();
    return 0;
    

    
}
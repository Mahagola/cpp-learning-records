#include<iostream>
using namespace std;
class percent{
    int s1;
    int s2;
    public:
    percent(int a,int b){
        s1=a;
        s2=b;
    }
    percent(){
        s1=100;
        s2=67;
    }
    percent(percent &obj){
       s1=obj.s1;
       s2=obj.s2;
    }
    
      void show()
    {
        cout << "percentage : " << s1 << endl;
        cout << "percentage : " << s2 << endl;
        
    }


};
int main(){
    percent o1(90,99),o2,o3(o1);
    o1.show();
    o2.show();
    o3.show();
percent o4=o2;
o4.show();
    return 0;
}
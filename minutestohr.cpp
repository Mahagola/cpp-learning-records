#include<iostream>
using namespace std;
class time{
int min;
int hr;
public:
time(int h,int m){
hr=h;
min=m;
}
operator int(){
  int p=hr*60+min;
  return p;
}
void display(){
    cout<<hr<<"hr "<<min<<"min "<<endl;
}
};
int main(){
    
    int p,q;
    cout<<"enter h: "<<endl;
    cin>>p;
    cout<<"Enter m: "<<endl;
    cin>>q;
    time obj(p,q);
    obj.display();
    return 0;
}
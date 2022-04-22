#include<iostream>
using namespace std;
class time{
int min;
int hr;
public:
time(){

}
  operator int{
 return (hr=p/60;
  min=p%60);
}

void display(){
    cout<<hr<<"hr "<<min<<"min "<<endl;
}
};
int main(){
    time obj;
    int t;
    cout<<"enter hr: "<<endl;
    cin>>t;
    t=obj;
    obj.display();
    return 0;
}
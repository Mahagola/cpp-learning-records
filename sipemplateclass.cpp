#include<iostream>
using namespace std;
template<class t1,class t2, class t3>
class simp{
    public:
    t1 x;
    t1 y;
    t1 z;
   
void setdata(t1 x,t2 y, t3 z){
    cout<<"entered principal amount is "<<x<<endl;
    cout<<"entered rate of interest is "<<y<<endl;
    cout<<"entered time limit  is "<<z<<endl;

}
void si(t1 x,t2 y, t3 z){

   int i=(x*y*z)/100;
	cout<<" The Simple interest for the amount "<<x<<" for "<<z<<" years  at the interest "<<y<<"  is: "<<i;
        cout << endl;
}
};
int main(){

 simp<int,float,int>obj;
 obj.setdata(2000,1.4,1);
 obj.si(2000,1.4,1);
 return 0;


}
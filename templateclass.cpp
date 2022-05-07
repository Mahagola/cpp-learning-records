#include<iostream>
using namespace std;
template <typename R>
class templateclass
{
    R x,y;
    public:
    void setdata(R s1,R s2){
        x=s1;
        y=s2;
    }
    void sum(R x,R y){
        cout<<"the sum is "<<(x+y)<<endl;
        
    }
    void product(R x,R y){
        cout<<"the product is "<<(x*y)<<endl;

    }
    void division(R x,R y){
        cout<<"the division is "<<(x/y)<<endl;

    }
};
int main(){
 templateclass<int>obj1;
 templateclass<int>obj2;
 templateclass<float>obj3;
 obj1.product(4,5);
 obj2.sum(6,7);
 obj3.division(85,2);
 return 0;

}


#include<iostream>
using namespace std;
template<class g1= int, class g2= float, class g3= char>
class f1{
    public:
g1 x;
g2 y; 
g3 z;
 f1(g1 a, g2 b, g3 c){
     x=a;
     y=b;
     z=c;
     cout<<this->x<<" is an int datatype "<<endl;
     cout<<this->y<<" is a float datatype "<<endl;
     cout<<this->z<<" is a char datatype "<<endl;
 }

};
int main(){
    f1<>obj1(12, 23.4, 'c');
    return 0;
}
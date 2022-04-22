#include<iostream>
using namespace std;
class worker{
    int id;
 static int num;
public:
void wokrdata(void){
    cout<<"Enter the id of worker "<<endl;
    cin>>id;
    num++;
}
void display(void){
    cout<<"the id of worker " <<num<< " is " <<id<<endl;
}
static void fornum(void){
cout<<"The value of num is:"<<num<<endl;
}

};
int worker::num=100;//default value is 0
int main()
{
worker rohith,mohan,sunil;
rohith.wokrdata();
rohith.display();
worker::fornum();

mohan.wokrdata();
mohan.display();
worker::fornum();

sunil.wokrdata();
sunil.display();
worker::fornum();

return 0;
}
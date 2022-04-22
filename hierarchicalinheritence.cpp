#include <iostream>
using namespace std;
class a
{
    int p;

public:
  void get_num(){
      cout<<"enter the number : "<<endl;
      cin>>p;
  }
    int get_p(void)
    {
        return p;
    }

};
class q : public a
{

public:
    int get_square()
    {
        int sqr;
        sqr = get_p() * get_p();
        return sqr;
    }

    void put1()
    {
        cout << "square of " << get_p() << " is " << get_square() << endl;
    }
};
class l : public q
{
public:
    int get_cube()
    {
        int cube;
        cube = get_p() * get_p() * get_p();
        return cube;
    }
    void put2()
    {
        cout << "cube of " << get_p() << " is " << get_cube() << endl;
    }
};
int main()
{
    q ob1;
    l ob2;
    // ob1.get_num();
    ob1.get_square();
    ob1.put1();
    // ob2.get_num();
    ob2.get_cube();
    ob2.put2();
    return 0;
}
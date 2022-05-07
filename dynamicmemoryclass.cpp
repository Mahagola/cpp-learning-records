#include <iostream>
using namespace std;
class data
{
public:
    int p;
    char q[20];
    void setdata()
    {
        cout << "enter id " << endl;
        cin >> p;
        cout << "enter name " << endl;
        cin >> q;
    }
    void getdata()
    {
        cout << " name  is " << q << endl;
        cout << " Id  is " << p << endl;
    }
};
int main()
{
    int i, n;
    cout << "enter number of students : " << endl;
    cin >> n;
    data *p = new data[n];

    for (i = 0; i < n; i++)
    {
        (p+1)->setdata();
    }
    for (i = 0; i < n; i++)
    {
        (p+i)->getdata();
    }

    return 0;
}
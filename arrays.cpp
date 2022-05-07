#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int mathmarks[] = {234, 45, 65, 34};

    do
    {
        cout << "The marks of the entered " << i << "is:" << mathmarks[i] << endl;
        i++;
    } while (i <= 3);
    for (int i = 0; i < 4; i++)
    {
        cout << " The mathmarks of " << i << " is :" << mathmarks[i] << endl;
    }

    while (i < 4)
    {
        cout << " The marks of " << i << " is :" << mathmarks[i] << endl;
        i++;
    }
  
    //pointers and arrays
    int *p=mathmarks;
    cout<<"value of *p is: "<<*p<<endl;
    cout<<"value of *p+1 is:"<<*(++p)<<endl;
    cout<<"value of *p+2 is:"<<*(++p)<<endl;
    cout<<"value of *p+3 is:"<<*(++p)<<endl;
    return 0;
}
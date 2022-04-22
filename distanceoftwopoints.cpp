#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class distance
{
    int x1;
    int y1;
    int x2;
    int y2;

public:
    distance(int a1,int a2,int b1, int b2)
    {
        x1 = a1;
        y1 = b1;
        x2 = a2;
        y2 = b2;
    }
   
   float distanceCalc(int a1,int a2,int b1, int b2){
       return sqrt(pow(a2-a1,2)+pow(b2-b1,2));

   }
    void show()
    {
        cout << "distance between the points is: " << distanceCalc << endl;
       
    }
};
int main()
{
    distance p1(2,3,45,5);
    p1.show();
    return 0;

};

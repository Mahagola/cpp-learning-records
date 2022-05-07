#include <iostream>
using namespace std;
int main()
{
  int p, q;
  int *r;
  cout << "enter number of  terms " << endl;
  cin >> p;
  r = new int[p];
  for (q = 0; q < p; q++)
  {
    cout << "put number : " << endl;
    cin >> r[q];
  }

  cout << "your numbers are : " << endl;
  for (q = 0; q < p; q++)

    cout << r[q] << ", ";
  delete[] r;

  return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int f;
    int g;
    for (int f = 0; f < 24; f++)
    {
        if (f == 7)
        {
            continue;
        }

        cout << f << endl;
    }
    for (int g = 0; g < 45; g++)
    {
        if (g == 23)
        {
            break;
        }

        cout << g << endl;
    }

    return 0;
}
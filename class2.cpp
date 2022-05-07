#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void binarynum(void);

    void check_bin(void);

    void Compliment(void);

    void Display(void);
};
void binary::binarynum(void)
{
    cout << "enter binary number" << endl;
    cin >> s;
    cout << "the entered binary num is:" << s << endl;
}
void binary::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number!" << endl;
            exit(0);
        }
    }
}
void binary::Compliment(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::Display(void)
{
    cout << "the compliment is:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << endl;
        ;
    }
}
int main()
{
    binary h;
    h.binarynum();
    h.check_bin();
    h.Display();
    h.Compliment();
    h.Display();

    return 0;
}

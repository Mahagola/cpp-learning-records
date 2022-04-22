#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{

    // ofstream out;
    // out.open("samplefile2.txt");
    // out<<"hello this is me"<<endl;
    // out<<"hello this me"<<endl;
    // out<<"hello this is kitty"<<endl;
    // out.close();

    string s2;
    ifstream in;
    in.open("samplefile2.txt");
    // in >> s2;
    // cout << "the content of file is : " << s2 << endl;
    // in.close();
    while (in.eof()==0)
    {
        getline(in , s2);
        cout<<s2<<endl;
    }
    in.close();

    return 0;
}

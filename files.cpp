#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    string setinfo;
    ofstream set("samplefile.txt");
    cout << "Enter Name: " << endl;
    cin >> setinfo;
    set << setinfo;

    set.close();

    string getinfo;
    ifstream get("samplefile.txt");
    get >> getinfo;
    cout << "the content of the file is: " << getinfo << endl;
    
    get.close();

    return 0;
}
// use for lecture

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // ofstream file("tExe.txt");
    // file<<"Number is 1"<<endl;
    // file<<"Number is 2"<<endl;
    // file<<"Number is 3"<<endl;
    // file<<"Number is 4"<<endl;

    // file.close();
    // cout<<"sucessful write file";

    ifstream file("tExe.txt");
    string s;
    while (getline(file, s))
    {
        cout << s << endl;
    }
    file.close();

    return 0;
}

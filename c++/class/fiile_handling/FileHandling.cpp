// file >> a[i]: This is the "heavy lifter." The >> operator reads the file word by word, skipping whitespace (spaces, tabs, newlines) automatically.

// while condition: By putting the extraction inside the while check, the loop stops naturally if the file ends (EOF) or if an error occurs.

// Boundary Protection: Including i < 100 is excellent practice. It ensures you don't keep reading if the file has more than 100 words, which would crash your program.

// ios:: is used to access open mode constants

//  the modern std::filesystem library (introduced in C++17) and the traditional fstream library.

// ios:: file systwm :- Copy, delete, create folders, check sizes
// fstream :- Input and output data streams

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Student
{
public:
    int id;
    char name[20];
};
int main()
{
    // ofstream fou; // fout = purpose write , fin = purpose read
    // fou.open("data2.txt");
    // fou << "Welcome to KICT234235"<<endl;
    // fou << "Welcome to KICT234235"<<endl;
    // fou << "Welcome to KICT234235"<<endl;
    // //
    // fou.close();
    // cout << "File written successfully";

    // ifstream fin;
    // char data[100];
    // // string data;
    // fin.open("data2.txt");
    // fin>>data;
    // // fin>>data;
    // cout<<data;
    // fin.close();

    ifstream fin;
    // char data[100];
    string data;
    fin.open("data2.txt");
    while (getline(fin, data))
    {
        cout << data << endl;
    }

    // fin>>data;
    cout << data;
    fin.close();


    //  ofstream file;
    // file.open("student.txt",ios::out);
    // file<<"Hello Studentw3re";
    // file.close();

    // ifstream file;
    // file.open("student.txt",ios::in);
    // char str[100];
    // file>>str;
    // cout<<str;
    // file.close();

    // Student s ={1,"Prinit"};
    // file.open("data.dat",ios::binary);
    // file.write((char*)&s,sizeof(s));   //(string address , sizeof(s));
    // file.close();
    // cout<<"file is open";

    // Student s1;
    // file.open("data.dat",ios::binary);
    // file.read((char*)&s1,sizeof(s1));
    // file.close();
    // cout<<s1.id<<" "<<s1.name;
    // file.close();
}
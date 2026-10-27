// useful  class for work in file

// fstream = <fstream> is a C++ header file that provides classes for file input and output.

// class like :- fstream , ofstream , ifstream

// ios:: is used to access input/output stream flags and settings. These settings tell a file stream how to open or handle a file.


// fstream
// ofstream
// ifstream

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){

    // ofstream out ("exampale12.txt");
    // string name = "prinit chauhan";
    // out<<name;
    // cout<<"print name in file";
    // out.close();

    // ifstream in("exampale12.txt");
    // string name ;
    // string name1;
    // getline(in,name);
    // // in>>name;
    // cout<<name;

    // ofstream out;
    // string name = "kict computer class : " ;
    // out.open("exampale12.txt");
    // out<<" hi , my name is prinit\n";
    // out<<name;
    // cout<<"print in file ";
    // out.close();

    // ifstream hin;
    // string name ;
    // hin.open("exampale12.txt");
    // while (hin.eof() == 0){
    //     getline(hin,name);
    //     cout<<name<<endl;
    // }
    // // hin>>name;
    // // cout<<name;
    // hin.close();

// }

// 4. What is filebuf?
// filebuf is the file-buffer class, available as std::filebuf through <fstream>.

// It connects a file on your storage device to C++ input/output operations. It manages the underlying file and its buffer.

// Think of the difference this way:
// - fstream provides a convenient interface for reading and writing.
// - filebuf handles the underlying file-buffer operations.


// Here, filebuf is a class, and buffer is its object.
// Think of buffer as a tool that connects your program's input/output stream to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    filebuf buffer;

    if (buffer.open("data.txt",
                    ios::out) == nullptr) {
        cout << "File opening failed";
        return 1;
    }

    ostream output(&buffer);
    output << "Hello using filebuf";

    buffer.close();
    return 0;
}

// if i write data using buffer

// ostream output(&buffer);
// Connect the output stream
// ostream is a class used for output.
// output is the object you create.
// &buffer passes the address of the buffer to the output stream.


// if i read data using buffer

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    filebuf buffer;

    if (buffer.open("data.txt", ios::in) == nullptr) {
        cout << "File opening failed";
        return 1;
    }

    istream input(&buffer);
    string line;

    while (getline(input, line)) {
        cout << line << endl;
    }

    buffer.close();

    return 0;
}



// all modes

// | Mode           | Full Meaning  | Work                                                        |
// |----------------|---------------|-------------------------------------------------------------|
// | `ios::in`      | Input         | Opens a file for reading.                                   |
// | `ios::out`     | Output        | Opens a file for writing.                                   |
// | `ios::app`     | Append        | Every write goes to the end of the file.                    |
// | `ios::ate`     | At End        | Initially positions the file pointer at the end; it can move elsewhere. |
// | `ios::binary`  | Binary Mode   | Opens a file in binary mode rather than text mode.          |
// | `ios::trunc`   | Truncate      | Discards existing contents when opening, if permitted.      |
// | `ios::nocreate`| No Create     | Legacy, non-standard mode: fails if the file does not exist.|
// | `ios::noreplace`| No Replace   | C++23 mode: prevents replacing an existing file when creating a new one. |

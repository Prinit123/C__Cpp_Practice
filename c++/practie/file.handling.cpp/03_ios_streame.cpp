// 1. Using getline() (Easiest for single lines)
// If your data is on one line or you want to read a specific amount including spaces, use
// file. getline().

#include <iostream>
#include <fstream>
#include <string>    //usee for string line mate.

using namespace std;
int main()
{

           // ofstream file;
           // file.open("example3.txt",ios::out);
           // file << "my name is prinit chauhan";
           // file.close();
           // cout << "open file";

           // use for print single line.

           // ifstream file;
           // char a[100];
           // file.open("example3.txt",ios::in);
           // // file >> a;
           // file.getline(a,100);
           // cout << a ;
           // file.close();

            //use string   & usse for multiline
           // ifstream file("example3.txt");
           // string line;

           // // This will loop through every line in the file
           // while (getline(file, line))
           // {
           //            cout << line << endl;
           // }
           // file.close();

           //         2. Using a while loop with get() (Best for all data)
           //          If your file has multiple lines or a lot of text, you can read
           //         itcharacter-by-character
           //         until the end of the file (EOF).

           //            ifstream file;
           //            char ch;
           //            file.open("example3.txt");
           //            // .get() reads every single character, including spaces and newlines
           //            while (file.get(ch))
           //            {
           //                       cout << ch;
           //            }

           //            file.close();


}
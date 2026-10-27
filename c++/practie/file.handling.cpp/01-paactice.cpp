// 2. Why put file >> a[i] inside the while condition?
// This is the most "pro" part of your code. Putting the extraction inside the while serves two purposes at once:

// It does the work: It actually performs the action of reading the word from the file and saving it into a[i].

// It checks for success: The expression file >> a[i] returns a "truthy" value if the read was successful. If the program hits the end of the file (EOF) or encounters an error, it returns "false," and the loop automatically stops.

// If you put file >> a[i] inside the loop body instead of the condition, your loop might run one extra time after the file is empty, leading to "garbage" data or empty strings in your last array slot.





#include <iostream>
#include <fstream>

using namespace std;
int main()
{
           // ofstream fout;
           // fout.open("example1.txt");
           // fout<<"welcome to kict";
           // fout.close();
           // printf("open file");

           // ifstream fin;
           // char data[100];
           // fin.open("example1.txt");
           // fin>>data;
           // cout<<data;
           // fin.close();

           // ofstream fout;
           // fout.open("example1.txt");
           // fout<<"welcome to kict";
           // fout.close();
           // printf("open file");

           // ofstream file;
           // file.open("example1.txt",ios::app);  //append
           // file<<"welcome to kict";
           // file.close();

           ifstream file;
           string a[100];
           file.open("example1.txt", ios::in);
           // file >> a[1];
           // cout << a[1];

           int i = 0;
           while (file >> a[i] && i < 100)
                                           //>> not read space in file.
           {
                      cout << a[i] << " ";    //" " = requried for space after 
                                              // words
                      i++;
           }
           file.close();
}
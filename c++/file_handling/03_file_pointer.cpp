// C++, there are two important file position pointers:
// - Get pointer — used for reading data.
// - Put pointer — used for writing data.


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    file << "HELLO";

    // Move the get pointer to the beginning  
    // swwkg means which is used to rading with poisition
    file.seekg(0);

    char ch;
    file.get(ch);
    cout << "First character: " << ch << endl;

    // Check the current get pointer position
    // tellg() tells you the current get pointer position.
    // The first character was read, so the pointer is now at position 1.
    cout << "Get pointer position: " << file.tellg() << endl;

    // Move the put pointer to the beginning
    // p stands for put, which is used for writing.
    file.seekp(0);

    file << "Y";

    file.close();

    return 0;
}



// | Mode | Meaning |
// |---|---|
// | `ios::in` | Open the file for reading. |
// | `ios::out` | Open the file for writing. |
// | `ios::trunc` | Clear the existing contents when opening the file. |
// | `|` (Bitwise OR) | Combines multiple file modes. |

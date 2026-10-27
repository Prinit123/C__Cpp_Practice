// ios::binary — Work with binary data

// Binary mode is useful for images, audio, and other data that should be handled as bytes rather than text.

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     char data[] = {'A', 'B', 'C'};

//     ofstream file("data.bin",
//                   ios::out | ios::binary);

//     if (!file.is_open()) {
//         cout << "File opening failed";
//         return 1;
//     }

//     file.write(data, sizeof(data));
//     file.close();

//     cout << "Binary data written";
//     return 0;
// }



// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     char data[] = {'A', 'B', 'C', 'D', 'E'};

//     // Write binary data
//     ofstream outFile("data.bin", ios::binary);

//     if (!outFile) {
//         cout << "File opening failed!";
//         return 1;
//     }

//     outFile.write(data, sizeof(data));
//     outFile.close();

//     // Read binary data
//     char buffer[5];

//     ifstream inFile("data.bin", ios::binary);

//     if (!inFile) {
//         cout << "File opening failed!";
//         return 1;
//     }

//     inFile.read(buffer, sizeof(buffer));

//     cout << "Data: ";
//    for (int i = 0; i < 5; i++) {
//     cout << buffer[i] << " ";
//  }

//     inFile.close();
//     return 0;
// }

// when i use string in binary


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char data[] = "prinit chauhan";

    // Write binary data
    ofstream outFile("data.bin", ios::binary);

    if (!outFile) {
        cout << "File opening failed!";
        return 1;
    }

    outFile.write(data, sizeof(data) - 1);
    outFile.close();

    // Read binary data
    char buffer[sizeof(data) - 1];

    ifstream inFile("data.bin", ios::binary);

    if (!inFile) {
        cout << "File opening failed!";
        return 1;
    }

    inFile.read(buffer, sizeof(buffer));

    cout << "Data: ";

    for (int i = 0; i < sizeof(buffer); i++) {
        cout << buffer[i];
    }

    inFile.close();

    return 0;
}


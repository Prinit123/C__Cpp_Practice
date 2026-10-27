// ios::nocreate — Do not create a missing file

// First, remember: ios::nocreate is an old, non-standard file mode. Modern C++ uses ifstream to achieve this behavior.
// Important: ios::nocreate is a legacy, non-standard mode. You cannot rely on it in modern standard C++.
// Use ifstream to open an existing file instead:

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("data.txt");

//     if (!file.is_open()) {
//         cout << "File does not exist or cannot be opened";
//     } else {
//         cout << "Existing file opened successfully";
//         file.close();
//     }

//     return 0;
// }

// Explanation:
// - If data.txt exists and can be opened, the program displays a success message.
// - If the file is missing, the program displays an error.
// - ifstream does not create a missing file.

//  2 = ios::noreplace — Do not replace an existing file

// ios::noreplace is available in C++23. It requests creation of a new file and fails if that file already exists.

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file("newfile.txt",
//                   ios::out | ios::noreplace);

//     if (!file.is_open()) {
//         cout << "File already exists or cannot be created";
//         return 1;
//     }

//     file << "New file created";
//     file.close();

//     cout << "File created successfully";
//     return 0;
// }

// Explanation:
// - If newfile.txt does not exist, the program can create it and write data.
// - If it already exists, opening fails instead of replacing its contents.
// - Your compiler must support C++23. For GCC, compile with -std=c++23.

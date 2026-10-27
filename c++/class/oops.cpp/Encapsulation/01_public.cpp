// | Feature                    | `public`       | `protected`            | `private`              |
// | -------------------------- | -------------- | ---------------------- | ---------------------- |
// | Inside the same class      | Yes            | Yes                    | Yes                    |
// | Outside the class          | Yes            | No                     | No                     |
// | In a derived (child) class | Yes            | Yes                    | No (directly)          |
// | Keyword symbol             | None           | None                   | None                   |
// | Main purpose               | General access | Class and child access | Restrict direct access |


// Public.cpp
// public specifier is accessible from anywhere in the program.
// It can be accessed by any function or object in the program.
//     It is the default access specifier for class members if no access specifier is specified.

#include<iostream>
using namespace std;
class Student {
public:
    string name;

    void display() {
        cout << name;
    }
};
int main()
{
    Student s;
    s.name = "Alice";
    s.display();
    return 0;
}
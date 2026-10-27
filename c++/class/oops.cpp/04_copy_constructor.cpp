// A copy constructor is a special constructor used to create a new object by copying the data of an existing object.

// Copy constructor = Create a new object from an existing object.

// Student s1(20);
// Student s2(s1);

// ClassName(const ClassName &object)
// {
//     // copy data
// }

// Student(const Student &s)
// {
//     age = s.age;
// }

#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    int prinit;

    // Parameterized constructor
    Student(int a)
    {
        age = a;
    }

    // Copy constructor
    Student(const Student &s)
    {
        prinit = s.age;
    }
    int hi(){
        cout<<prinit;
    }
};

int main()
{
    Student s1(20);

    Student s2(s1);

    cout << "s1 age = " << s1.age << endl;
    cout << "s2 prinit = " << s2.prinit << endl;
    cout << s1.prinit<<endl;  //not possibale so , give random number 
    cout << s2.prinit<<endl;

    return 0;
}

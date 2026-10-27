// What is a Base Class Pointer in C++?

// Definition for exam: A base class pointer is a pointer declared using the parent class type that can store the address of an object of the base class or any of its derived classes.

// 1. Simple example


// What is the meaning of virtual?
// virtual void show() {
//     cout << "Base\n";
// }

// The virtual keyword allows C++ to choose the appropriate overridden function based on the actual object being pointed to at runtime.

// Base* ptr;
// ptr = &dv1;
// ptr->show();

// Although ptr is a pointer of type Base*, it points to a Derv1 object.
// Because show() is virtual, C++ executes the Derv1 version.
// output is = Derv1

// Derv1 dv1;
// Derv2 dv2;

// Two objects are created:
// dv1 belongs to class Derv1.
// dv2 belongs to class Derv2.
// Step 2: Create a base-class

// Base* ptr;
// This creates a pointer that can point to a Base object or an object of a class derived from Base.

// ptr = &dv1;
// ptr->show();

// &dv1 gives the address of object dv1.
// ptr points to dv1.
// ptr->show() calls the overridden function in Derv1.

// Derv1
// ptr = &dv2;
// ptr->show();

// &dv1 gives the address of object dv1.
// ptr points to dv1.
// ptr->show() calls the overridden function in Derv1.
// output :-
// Derv2

// Call the base-class function directly

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base\n";
    }
};

class Derv1 : public Base {
public:
    void show() {
        cout << "Derv1\n";
    }
};

class Derv2 : public Base {
public:
    void show() {
        cout << "Derv2\n";
    }
};

int main() {
    Derv1 dv1;
    Derv2 dv2;

    Base* ptr;

    ptr = &dv1;
    ptr->show();

    ptr = &dv2;
    ptr->show();

    ptr->Base::show();
}
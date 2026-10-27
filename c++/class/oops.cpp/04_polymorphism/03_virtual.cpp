// virtual means calling the correct child class function when using a parent class pointer or reference

// use pointer in simpale overide code

// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void show() {
//         cout << "Parent class";
//     }
// };

// class Child : public Parent {
// public:
//     void show() {
//         cout << "Child class";
//     }
// };

// int main() {
//     Parent* p;
//     Child c;

//     c.show();
//     p = &c;
//     p->show();

//     return 0;
// }


// 2.
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent class";
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child class";
    }
};

int main() {
    Child c;
    c.show();

    return 0;
}

// virtual → enables runtime polymorphism through a parent pointer or reference.
// override → confirms that the child function correctly overrides a virtual parent function.

// void sho() override {
//     cout << "Child class";
// }

// void show() {
//     cout << "Child class";
// }

// override is used in a derived class to explicitly indicate that a function overrides a virtual function of the base class. It helps detect errors at compile time.



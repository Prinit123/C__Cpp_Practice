// both  content is same function or same class but diffrent appliment

#include <iostream>
using namespace std;

class Parent
{
public:
           void showMessage()
           {
                      cout << "Message from Parent" << endl;
           }
};

class Child : public Parent
{
public:
           void showMessage()
           { // Function Overridden
                      cout << "Message from Child" << endl;
           }
};

int main()
{
           Child c;
           c.showMessage(); //overridding any one class.
           // Parent p;
           // p.showMessage();
}

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//            // The 'virtual' keyword is essential for overriding
//            virtual void make_sound()
//            {
//                       cout << "The animal makes a generic sound." << endl;
//            }
// };

// class Dog : public Animal
// {
// public:
//            // This overrides the base class function
//            void make_sound() override
//            {
//                       cout << "The dog barks: Woof! Woof!" << endl;
//            }
// };

// int main()
// {
//            Animal *my_pet = new Dog();

//            // Because of overriding, this calls Dog's version, not Animal's
//            my_pet->make_sound();

//            delete my_pet;
//            return 0;
// }


// #include <iostream>
// using namespace std;

// class Parent
// {
// public:
//            virtual void showMessage()
//            { // Added virtual
//                       cout << "Message from Parent" << endl;
//            }
// };

// class Child : public Parent
// {
// public:

// override tells the compiler:
// "I am intentionally overriding a virtual function from the parent class."


//            void showMessage() override
//            { // Added override for safety
//                       cout << "Message from Child" << endl;
//            }
// };

// int main(){
// // Now...
// Parent *ptr
// ptr is a pointer to a Parent object.
// new Child()
// creates a Child object.
// Parent *ptr = new Child();
// A Parent pointer is pointing to a Child object.
    //       ptr
    //        |
    //        ↓
    //  ┌─────────────┐
    //  │ Child object│
    //  └─────────────┘

    // This is allowed because Child is a Parent through inheritance.
    // "ptr is a Parent pointer, so it should call Parent's showMessage()."
    // The actual object is:
    // new Child()
    // Child::showMessage()
    // Therefore the output is:  Message from Child


// Parent *ptr = new Child();
// ptr->showMessage(); // Output: "Message from Child" (Polymorphism in action!)
// }


// binary operators
// and
// It outputs a 1 only if both bits are 1; otherwise, it outputs 0


// or
// The bitwise OR operator compares each bit and outputs a 1 if at least one of the bits is 1. It only outputs 0 if both bits are 0
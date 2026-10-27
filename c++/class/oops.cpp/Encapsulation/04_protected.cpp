#include <iostream>

class Parent {
protected:
    int protectedValue = 42; // Accessible here and in child classes
};

class Child : public Parent {
public:
    void display() {
        // Valid: Child class can access protected members of the parent
        std::cout << "Value: " << protectedValue << std::endl; 
    }
};

int main() {
    Child obj;
    obj.display();
    
    // obj.protectedValue = 100; 
    // ERROR: Compiler error if you try to access it directly from outside
}
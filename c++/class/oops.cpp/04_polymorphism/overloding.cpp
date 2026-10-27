// Overloading happens when you have multiple functions with the same name but different parameters within the same class.

#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    { // Version 1
        return a + b;
    }
    int add(int a, int b, int c)
    { // Version 2: Overloaded
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    cout << c.add(4, 6, 67);
}
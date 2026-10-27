#include <iostream>

using namespace std;

int main() {
           int a, b;
           cout << "Enter number a: ";
           cin >> a;
           cout << "Enter number b: ";
           cin >> b;

           try {
                      if (b == 0) {
                                 throw(b);
                      } else {
                                 cout << "a divided by b is: " << (a / b) << '\n';
                      }
           }
           catch (int e) {
                      cout << "Error: Division by zero is not allowed." << '\n';
           }
           
           return 0;
}
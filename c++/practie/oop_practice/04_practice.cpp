// Create a class Car with a method startEngine() that prints "Engine started".

#include <iostream>
using namespace std;

class car
{
public:
           virtual void startEngine()
           {
                      cout << "Vehicle engine started" << endl;
           }
};

int main()
{
           car mycar;
           mycar.startEngine();
           return 0;
}
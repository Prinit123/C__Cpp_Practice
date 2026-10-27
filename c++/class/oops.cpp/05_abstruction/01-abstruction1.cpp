#include <iostream>
using namespace std;

class TV {
public:
    virtual void turnOn() = 0;
};

class Samsung : public TV {
public:
    void turnOn() override {
        cout << "TV is ON";
    }
};

int main() {
    Samsung s;
    s.turnOn();

    return 0;
}


// override tells the compiler that this function is intended to override a virtual function from the parent class.
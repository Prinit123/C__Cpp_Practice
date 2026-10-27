// // Class: A blueprint or a template. It defines what data an object will have and what it can do.

// // Object: A specific instance of that  class.
//  When a class is defined, no memory is allocated, but when an object is created, memory is allocated to hold its specific state

// In your C++ code, public means that the members below it can be accessed from outside the class.

// #include <iostream>
// using namespace std;

// class animal
// {
// public:
//     int cat()
//     {
//         cout << "hello kict";
//     }
//     int dog()
//     {
//         cout << "\nbark....";
//     }
// };
// int main()
// {
//     animal a;
//     a.eat();
//     a.dog();
// }

#include <iostream>
using namespace std;

class kict
{
public:
    int clas()
    {
        cout << "hi" << endl;
    }
};
int main()
{
    kict ob;
    ob.clas();
}
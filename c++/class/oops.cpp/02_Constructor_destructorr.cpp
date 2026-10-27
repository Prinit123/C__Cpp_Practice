// ~ (tilde)


#include <iostream>
using namespace std;

class animal
{
public:
    animal(int a, int b)
    {
        cout << "constructor is the birth of class\n"
            << a + b;
    }

    ~animal()
    {
        cout << "destructor is the death of class\n";
    }

    int dog()
    {
        cout << "\nbark....\n ";
    }
};
int main()
{
    animal a(5, 6); // a -> object
    a.dog();
}

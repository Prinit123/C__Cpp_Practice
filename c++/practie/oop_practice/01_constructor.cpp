#include <iostream>
using namespace std;

class animal
{
public:
           int aaa()
           {
                      cout << "default function\n" << endl;
           }
           animal()
           {
                      cout << "constructor\n";
           }
};

int main()
{
           animal a;
           a.aaa();
}
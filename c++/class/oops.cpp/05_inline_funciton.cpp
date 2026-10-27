// The compiler may replace the function call with the function's code.


#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    cout << square(5);
    return 0;
}


// How it works

// Normally:
// square(5);
// The program makes a function call and then returns the result.

// With an inline function, the compiler may treat it approximately like:
// cout << 5 * 5;


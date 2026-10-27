
// Encapsulation is one of the four fundamental pillars of Object-Oriented 
// Programming (OOP). In C++, it is the process of wrapping data (variables) and 
// the
// code that operates on them (functions) into a single unit called a class.

// Think of it like a medical capsule: the medicine inside is the data, and the 
// plastic shell protects it from being tampered with directly.


// use for data hiding use with access modifiers.



#include <iostream>
using namespace std;

class teacher
{
private:
           double salary;

public: // use class and obj both  because it`s public
           string name;
           string dept;
           string subject;

           int changdepa(string newdepa)
           {
                      dept = newdepa;
           }

           //setter
           void setsalery(double s)
           {
                      salary = s;
           }
           //getter
           double getsalary()
           {
                      return salary;
           }
};

int main()
{
           teacher t1;
           t1.name = "prinit";
           t1.subject = "sci";
           t1.setsalery(234000);

           cout << t1.getsalary() << endl;
           cout << t1.name << endl; // output = prinit
}
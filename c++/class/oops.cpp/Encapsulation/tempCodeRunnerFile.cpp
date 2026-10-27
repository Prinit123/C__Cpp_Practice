#include <iostream>
using namespace std;

class teacher
{
private:                       //use only in class  because it`s private
           string name;
           string dept;
           string subject;
           double salary;

           int changdepa(string newdepa)
           {
                      dept = newdepa;
           }
};

int main()
{
           teacher t1;
           t1.name = "prinit";
           t1.subject = "sci";
           t1.changdepa;

           cout << t1.name << endl;
}

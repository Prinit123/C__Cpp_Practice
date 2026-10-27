// #include <iostream>
// using namespace std;

// class teacher
// {
// private:                       //use only in class  because it`s private
//            string name;
//            string dept;
//            string subject;
//            double salary;

//            int changdepa(string newdepa)
//            {
//                       dept = newdepa;
//            }
// };

// int main()
// {
//            teacher t1;
//            t1.name = "prinit";
//            t1.subject = "sci";
//            t1.changdepa;

//            cout << t1.name << endl;
// }

// #include <iostream>
// using namespace std;

// class teacher
// {
// public: // use class and obj both  because it`s public
//            string name;
//            string dept;
//            string subject;
//            double salary;

//            int changdepa(string newdepa)
//            {
//                       dept = newdepa;
//            }
// };

// int main()
// {
//            teacher t1;
//            t1.name = "prinit";
//            t1.subject = "sci";

//            cout << t1.name << endl;    // output = prinit
// }

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

           // cout << t1.setsalery();?
           cout << t1.getsalary() << endl;
           cout << t1.name << endl; // output = prinit
}
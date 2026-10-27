// A constructor is a special function in a class that is automatically called when an object is created.

// Is mainly used to initialize objects

#include <iostream>
using namespace std;

class animal
{
public:
    int id;
    int b;

    // animal(){

    //     cout<<"Default constructor"<<endl;
    // }


    animal(int a)
    {
        id = a;
        cout << "Paramitorized constructor : "<<a<<endl;
    }


    // A copy constructor is a special constructor used to create a new object by copying the data of an existing object.
    
    animal(const animal &d)
    {
        b = d.id;
        cout << "Copy constructor: "<<b<<endl;
    }

    int dog()
    {
        cout << "\nbark....\n ";
    }
};
int main()
{
    animal s1(5);

    animal s2=s1;  // or second method to write ( animal s2(s1); )
    // a -> object

}

// #include <iostream>
// using namespace std;

// class teacher
// {

// public:
//     string name;
//     string dept;
//     string subject;

// private:
//     double salary;

// public:
//     // data inittalation  =  data value assign in starting using constructor
//     // like  ,  this class  dept = computer enginnering.
//     teacher()
//     {
//         // cout << "hi , i am constructor" << endl;
//         dept = "computer enginnering";
//     }

//     int changdepa(string newdepa)
//     {
//         dept = newdepa;
//     }

//     // setter
//     void setsalery(double s)
//     {
//         salary = s;
//     }
//     // getter
//     double getsalary()
//     {
//         return salary;
//     }
// };

// int main()
// {
//     teacher t1;
//     t1.name = "prinit";
//     t1.subject = "sci";
//     t1.setsalery(234000);


//     cout << t1.dept << endl;         // i have not call dept but it direct run because constructor
//     cout << t1.getsalary() << endl;
//     cout << t1.name << endl; // output = prinit
// }

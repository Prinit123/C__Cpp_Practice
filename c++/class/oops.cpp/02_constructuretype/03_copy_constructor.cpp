#include <iostream>
using namespace std;

class teacher
{

public:
           string name;
           string dept;
           string sub;
           double salary;

           teacher(string name, string sub, string dept, double salary)
           {
                      this->name = name; // "this->name" refers to the class member
                      this->sub = sub;   // like obj member;
                      this->dept = dept; // "sub" refers to the parameter passed in
                      this->salary = salary;
           }

           void getinfo()
           {
                      cout << "name : " << name << endl;
                      cout << "subject : " << sub << endl;
                      cout << "department : " << dept << endl;
                      cout << "salary : " << salary << endl;
           }
};

int main()
{
           teacher t1("prinit", "sci", "computer engi.", 125000);
           // t1.getinfo();
           teacher t2(t1); // copy t1 object and create new boject name t2
           t2.getinfo();
}

// second method to copy constructor

// #include <iostream>
// using namespace std;

// class animal
// {
// public:
//            int id;

//            // animal(){

//            //     cout<<"Default constructor"<<endl;
//            // }

//            animal(int a)
//            {
//                       id = a;
//                       cout << "Paramitorized constructor : " << a << endl;
//            }

//            animal(const animal &d)
//            {
//                       id = d.id;
//                       cout << "Copy constructor: " << id << endl;
//            }

//            int dog()
//            {
//                       cout << "\nbark....\n ";
//            }
// };
// int main()
// {
//            animal s1(5);

//            animal s2 = s1; // or second method to write ( animal s2(s1); )
//                            // a -> object
// }

// #include <iostream>
// using namespace std;

// class teacher
// {

// public:
//            string name;
//            string dept;
//            string sub;
//            double salary;

//            teacher(string name , string sub, string dept, double salary){
//                       this->name = name;  // "this->name" refers to the class member
//                       this->sub = sub;                  //like obj member;
//                       this->dept = dept;   // "sub" refers to the parameter passed in
//                       this->salary = salary;
//            }
//            teacher(teacher &orgobj)      //orignal object addresssit`s
//            {
//                       this->dept = orgobj.dept;
//                       this->name = orgobj.name;
//                       this->sub = orgobj.sub;
//                       this->salary = orgobj.salary;
//            }

//            void getinfo(){
//                       cout << "name : " <<name <<endl;
//                       cout << "subject : " <<sub <<endl;
//                       cout << "department : " <<dept <<endl;
//                       cout << "salary : " <<salary <<endl;
//            }
// };

// int main()
// {
//            teacher t1("prinit","sci","computer engi.",125000);
//            // t1.getinfo();
//            teacher t2(t1);     //copy t1 object and create new boject name t2
//            t2.getinfo();
// }

// Inheritance allows one class (the Child) to acquire the properties and methods of another class (the Parent). This helps avoid writing the same code over and over.

// #include <iostream>
// using namespace std;

// class father
// {
// public:
//            void car()
//            {
//                       cout << "car....";
//            }
// };
// class child : public father
// {
// public:
//            void bike()
//            {
//                       cout << "bikeeee....";
//            }
// };

// int main()
// {
//            child c;

//            c.car();
//            // c.bike();
// }


// #include<iostream>
// using namespace std;

// class Parent
// {
// public:
//            void greet()
//            {
//                       cout << "Hello from Parent!" << endl;
//            }
// };

// // Child inherits from Parent
// class Child : public Parent
// {
// public:
//            void play()
//            {
//                       cout << "Child is playing." ;
//            }
// };

// int main()
// {
//            Child c;
//            c.greet();
//            c.play();
// }



#include<iostream>
using namespace std;

class father
{
           public:

           string name;
           string course;

           father(){
           }
};
class son : public father{
           public:
           int rollno;
           void getinfo(){

                      cout<<"name : "<<name<<endl;
                      cout<<"course : "<<course<<endl;
                      cout<<"rollno : "<<rollno<<endl;
           }
};
int main(){
           son s1;
           s1.name = "prinit";
           s1.course = "ce";
           s1.rollno = 211260;

           s1.getinfo();
}

// 1. which default constructor is going to run first father or son?
//  ans = first we call son but son inheritage father so first run father constructer after
// run con default constructer.


// single level
// multilevel
// multiple
// hireachal
// hybrid
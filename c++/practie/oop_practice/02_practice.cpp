// Create a Person class with name and age properties. Then create an object of this class.


#include<iostream>
using namespace std;

class yash{
           public:
           int name(){
                      cout<<"yash , kict facalties\n";
           }
           int age(){
                      cout<<"35\n";
           }
};

int main(){
           yash a;
           a.age();
           a.name();
}
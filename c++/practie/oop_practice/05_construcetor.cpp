// 1.	Create a class Student with attributes name and marks, and a method to display details.

#include<iostream>
using namespace std;

class student
{
           public:

           student(string name , int marks){
                      cout<<"name : "<<name<<endl;
                      cout<<"marks : "<<marks<<endl;
           }
};
int main(){
           student a("prinit",76);
}
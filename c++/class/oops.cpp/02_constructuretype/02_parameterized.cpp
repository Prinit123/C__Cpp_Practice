// use autometically select which funstion is perfect for parameter
//use parameter data type
// it`s method call overloadding

#include <iostream>
using namespace std;

class teacher
{

public:
           string name;
           string dept;
           string sub;
           double salary;


           teacher()
           {
                      // cout << "hi , i am constructor" << endl;
                      dept = "computer enginnering";
           }

           teacher(string n , string s, string d, double sal){
                      name = d;  //d id parameter for assign value 
                      sub = s;    //name , sub .. is 
                      dept = d;
                      salary = sal;
           }

           void getinfo(){
                      cout << "name : " <<name <<endl;
                      cout << "subject : " <<sub <<endl;
                      cout << "department : " <<dept <<endl;
                      cout << "salary : " <<salary <<endl;
           }
};

int main()
{
           teacher t1("prinit","sci","computer engi.",125000);
           t1.getinfo();
}

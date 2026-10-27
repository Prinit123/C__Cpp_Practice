#include <iostream>
using namespace std;
class Student
{
private:
//private,public,protected -.  access specifier
           int marks;

public:
           void setMarks(int m)
           {
                      marks = m;
           }

           int getMarks()
           {
                      return marks;
           }
};
int main()
{
           Student s;
           //  s.marks = 90;   // Error: 'marks' is private within this context
           s.setMarks(90);       // Correct way to set marks
           cout << s.getMarks(); // Correct way to get marks
           return 0;
}
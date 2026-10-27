// Create a class Rectangle with properties width and height, and a method to calculate area.

#include <iostream>
using namespace std;

class rectangle
{
private:
           int width;
           int height;

public:
           int area;
           //setter
           void setarea(int w , int h)
           {
                      area = w * h;
                      cout << "ractangle area calculated : ";
           }
           //getter
           int getarea()
           {
                      return area;
           }
};

int main()
{
           rectangle a;
           a.setarea(5,10);
           cout << a.getarea();
           return 0;
}
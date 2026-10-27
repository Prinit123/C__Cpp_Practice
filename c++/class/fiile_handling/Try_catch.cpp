#include <iostream>
using namespace std;
int main()
{

           int a, b;
           cout << "Enter two  Numbers";
           cin >> a >> b;
           try
           {
                      if (b == 0)
                      {
                                 throw b;
                      }

                      if(b>a){
                                 // if we use streing so , direct catch (string s)
                                //  throw string("Error: Cannot divide when the denominator is larger.");
                                 //if we use characterso , catch(const char* s)
                                 throw "Not Divide ";
                      }

                      cout << "Division :" << a / b << endl;
           }
           catch (int x)
           {
                      cout << "Cannot divide by: "<< x;
           }

           catch(string s){
                      cout<<s;      //if we use string.
           }

           catch(const char* s)
           {
                      cout<<s;    //if we use character.
           }
}
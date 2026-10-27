#include<iostream>
using namespace std;

int main()
{
           // int a=10;

           // int *p=&a;

           // cout<<"Value of  A "<<a<<endl;
           // cout<<"Address of  A "<<&a<<endl;
           // cout<<"Pointer value "<<*p<<endl;

           //use of arr
           int arr[]={10,20,30};

           int *p=arr;
           cout<<*p<<endl;
           cout<<*(p+1)<<endl;
           cout<<*(p+2)<<endl;

           //use of string

           // string  name = "prinit chauhan";
           // string *p = &name;
           // cout<<*p<<endl;

           // string name = "prinit chauhan";
           // const char *p = name.data();
           // cout<<*p<<endl;
           // cout<<p<<endl;

           return 0;
}



// string name = "prinit chauhan";

//  Use .data() or .c_str() to get a character pointer
// const char *p = name.data();

// cout << *p << endl;       // Output: 'p' (dereferences first char)
// cout << p << endl;        // Output: "prinit chauhan" (prints the whole string)


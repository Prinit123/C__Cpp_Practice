//getline (in , name);

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){

           ofstream fout("example5.txt");
           string name;
           cout<< "enter my name: ";
           cin>>name;
           cout<<name;

           // cout<<"my name is :"+name;

           return 0;
}
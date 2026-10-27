#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
           // ofstream hout("example4.txt");
           // cout<<"enter your name: ";
           // string name;
           // cin>>name;

           // hout<<name;

           ifstream hin("example4.txt");
           cout<<"my name is :";
           string name;
           cin>>name;

           cout<<"my name is " +  name;
           return 0;
}
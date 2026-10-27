#include<iostream>
#include<fstream>

using namespace std;
int main(){

           ofstream file;
           file.open("example4.txt", ios::out);
           file<<"hello my name is print";
           cout<<"file open";
           file.close();
}
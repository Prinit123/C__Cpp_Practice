#include<iostream>
#include<fstream>
using namespace std;

int main(){
           // ofstream fout;
           // fout.open("example1.txt");
           // fout<<"hi, my name is prinit";
           // cout<<"open file";
           // fout.close();

           ifstream fin;
           char a[100];
           fin.open("example1.txt");

           int i=0;
           while(fin>>a[i] && i<=100){
                      cout<<a[i];
                      i++;
           }
           // fin>>a;
           // cout<<a;
           fin.close();
}

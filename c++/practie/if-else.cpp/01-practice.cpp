#include<iostream>
using namespace std;

int main(){
           int a ;
           int b ;
           int c ;
           cout<<"enter a number : ";
           cin>> a;
           cout<< "enter b number : ";
           cin>>b;
           cout<< "enter d number : ";
           cin>>c;

           if(a>c && a>b){
                      cout<<"a is greater number ";
           }else if(b>a && b>c){
                      cout<< "b is grater number ";
           }else{
                      cout<<"c is greater number ";
           }
}
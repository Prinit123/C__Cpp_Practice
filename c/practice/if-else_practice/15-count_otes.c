#include<stdio.h>
int main(){
           int n = 12210;

           if(n>=500){
                      int note = n/500;
                      printf("give me 500 note : %d\n",note);
                      n=n-(note*500);
           }if(n>=200){
                      int note = n/200;
                      printf("give me 200 note : %d\n",note);
                      n=n-(note*200);
           }if(n>=100){
                      int note = n/100;
                      printf("give me 100 note : %d\n",note);
                      n=n-(note*100);
           }if(n>=50){
                      int note = n/50;
                      printf("give me 50 note : %d\n",note);
                      n=n-(note*50);
           }if(n>=20){
                      int note = n/20;
                      printf("give me 20 note : %d\n",note);
                      n=n-(note*20);
           }if(n>=10){
                      int note = n/10;
                      printf("give me 10 note : %d\n",note);
                      n=n-(note*10);
           }
}
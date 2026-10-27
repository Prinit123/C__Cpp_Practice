#include<stdio.h>
int main(){
           for(int a=0; a<=10; a++){
                      for(int b=0; b<=10; b++){
                                 if((a==b)||(a+b==10)){
                                            printf("*");
                                 }
                                 else{
                                            printf(" ");
                                 }
                      }
                      printf("\n");
           }
}
#include<stdio.h>
int main(){
           for(int a=0; a<5; a++){
                      for( int b=0; b<5; b++){
                                 if(a==b){
                                            printf("*");
                                 }else{
                                            printf(" ");
                                 }
                      }
                      printf("\n");
           }
}
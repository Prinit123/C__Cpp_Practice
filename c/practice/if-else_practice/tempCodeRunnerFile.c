#include<stdio.h>
int main(){
           int a;

           printf("enter a number:");
           scanf("%d",&a);

           if(a%5==0 || a%11==0){
                      printf("a is divisable by 5 and 11");
           }else{
                      printf("a is not divisable");
           }
}
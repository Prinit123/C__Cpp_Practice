#include<stdio.h>
int main(){
           int a ;
           int b ;
           int c ;
           printf("enter a number:");
           scanf("%d",&a);
           printf("enter b number :");
           scanf("%d",&b);
           printf("enter c number :");
           scanf("%d",&c);

           if(a>b && a>c){
                      printf("a number is max");
           }else if(b>a && b>c){
                      printf("b number is mex");
           }else{
                      printf("c number is max");
           }
}
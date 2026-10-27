#include<stdio.h>
int max(int a , int b){
           if(a>b){
                      printf("a is max");
           }else{
                      printf("B IS MAX");
           }
           return 0;
}
int main(){
           int a , b;
           printf("etnter a , b number: ");
           scanf("%d %d",&a ,&b);
           max(a,b);
}
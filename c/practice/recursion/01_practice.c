#include<stdio.h>
int abc(int a){
           if(a>0){
                      if(a%2==0){
                                 printf("%d\n",a);
                      }
                      a--;
                      return abc(a);
           }
}
int main(){
           int a;
           printf("enter a number : ");
           scanf("%d",&a);
           abc(a);
           return 0;
}
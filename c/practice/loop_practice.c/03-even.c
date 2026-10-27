#include<stdio.h>
int main(){
           int n;
           printf("enter n number : ");
           scanf("%d",&n);

           int a = 1;
           while(a<=n){
                      if(a%2==0){
                                 printf("even number :%d\n",a);
                      }else{
                                 printf("odd  number : %d\n",a);
                      }
                      a++;
           }
}
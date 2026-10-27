#include<stdio.h>
int factorial(){
           int n , f=1;
           printf("enter n number :");
           scanf("%d",&n);
           for(int i=1; i<=n; i++){
                      f*=i;
           }
           printf("%d",f);
}
int main(){
           factorial();
}
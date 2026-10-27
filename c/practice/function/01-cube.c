#include<stdio.h>
int cube(int n){
           int a=1;
           for(int i=0; i<3; i++){
                      a = a*n;
           }
           printf("%d",a);
           return 0;
}
int main(){
           int n ;
           printf("etner n number:");
           scanf("%d",&n);
           cube(n);
           return 0;
}
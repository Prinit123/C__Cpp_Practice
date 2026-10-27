#include<stdio.h>
int main(){

           int a=10, b=20;

           int *c = &a;
           int *d = &b;

           *d = *d + *c;
           *c = *d - *c;
           *d = *d - *c;

           printf("%d\n",*d);
           printf("%d",*c);

}
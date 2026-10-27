#include<stdio.h>
int main(){

           char a[100];
           printf("enter name:");
           gets(a);
           char b[100];
           strcpy(b,a);
           puts(b);
}
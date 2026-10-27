#include<stdio.h>
int main(){

           char a[100];
           char b[100];
           printf("enter name:");
           gets(a);
           printf("enter name:");
           gets(b);

           strcat(a,b);
           puts(a);
}
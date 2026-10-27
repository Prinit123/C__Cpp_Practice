#include<stdio.h>
int main(){
           FILE *ftp;

           char a[100] ;
           ftp = fopen("example3.txt","w");

           printf("Enter data:");
           scanf("%s",&a);

           fprintf(ftp,"\n %s",a);
}
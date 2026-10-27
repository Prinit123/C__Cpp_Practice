// fgets (short for file get string) is the go-to function in C for reading a line of text from a file. It is considered much safer than fscanf because it allows you to set a limit on how many characters to read, preventing your program from crashing if the line is too long.


#include<stdio.h>
int main(){
           FILE *ftp;


           ftp = fopen("example5.txt","r");
           char a[100];

           fgets(a,100,ftp);

           printf("%s",a);

}

  // while((a=fgetc(ftp))!=EOF)
           // {
           //            printf("%c",a);
           // }
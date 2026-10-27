#include<stdio.h>
int main()
{
           FILE *fp;

           // char data[] = "welcome to kict";

           fp = fopen("example2.txt", "w");

           if (fp == NULL)
           {
                      printf("file not open");
           }
           else
           {

                      fputs("welcome to kict",fp);
                      fputs("\n223 , 34,m ,printf",fp);

                      fclose(fp);
           }
}
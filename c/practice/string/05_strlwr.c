// all string convert in lower case strlwr()

#include <stdio.h>
#include <string.h>
int main()
{
           char str1[100];
           printf("enter  1 umber: ");
           gets(str1);

           printf("%s\n",strlwr(str1));

           return 0;
}
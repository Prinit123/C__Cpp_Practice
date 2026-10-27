#include <stdio.h>
int main()
{

           char a[100];
           printf("enter name:");
           gets(a);

           puts(a);

           int len = strlen(a);
           printf("%d", len);
}
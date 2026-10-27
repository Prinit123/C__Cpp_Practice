
// 4. Write a program in C to print individual characters of a string in reverse order.
// Test Data :
// Input the string : kictindia.com
// Expected Output :
// The characters of the string in reverse are :
// m o c . a i d n i t c i k

#include <stdio.h>
#include<string.h>
int main()
{
           char name[100] = "kictindia.com";

           for (int i = strlen(name); i >= 0; i--)
           {
                      printf("%c ", name[i]);
           }
}
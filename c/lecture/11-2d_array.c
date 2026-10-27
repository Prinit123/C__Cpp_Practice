// what is array ?
// a collection of values with same datatypes
// One D array
// two D array
#include <stdio.h>
int main()
{
           int a[100][100], b, c;
           for (b = 0; b < 3; b++)
           {
                      for (c = 0; c < 3; c++)
                      {
                                 printf("Enter a number ");
                                 scanf("%d", &a[b][c]);
                      }
           }
           for (b = 0; b < 3; b++)
           {
                      for (c = 0; c < 3; c++)
                      {
                                 printf("%d", a[b][c]);
                      }
                      printf("\n");
           }
}
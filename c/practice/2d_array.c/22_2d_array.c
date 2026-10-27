#include <stdio.h>
int main()
{
           int a[100][100], b, c;
           int d[100][100], e, f;

           for (b = 0; b < 3; b++)
           {
                      for (c = 0; c < 3; c++)
                      {
                                 printf("enter n number :");
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

           for (e = 0; e < 3; e++)
           {
                      for (f = 0; f < 3; f++)
                      {
                                 printf("enter n number :");
                                 scanf("%d", &d[e][f]);
                      }
           }
           for (e = 0; e < 3; e++)
           {
                      for (f = 0; f < 3; f++)
                      {
                                 printf("%d", d[e][f]);
                      }
                      printf("\n");
           }

           int sum[100][100];
           for (int g = 0; g < 3; g++)
           {
                      for (int h = 0; h < 3; h++)
                      {
                                 sum[g][h] = a[g][h] * d[g][h];
                      }
           }
           for (int g = 0; g < 3; g++)
           {
                      for (int h = 0; h < 3; h++)
                      {
                                 printf(" %d ",sum[g][h]);
                      }
                      printf("\n");
           }
}

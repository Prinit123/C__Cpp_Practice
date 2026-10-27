
// hamensa condition apvani bar nay

// r==1,r==5
// c==1,c==5
// r==c,r+c==6




#include <stdio.h>
int main()
{
           for (int r = 1; r <= 5; r++)
           {
                      for (int c = 1; c <= 6 - r; c++)
                      {
                                 printf(" ");
                      }
                      for (int c = 1; c <= r; c++)
                      {
                                 if (r == 5 || c == 1)
                                 {
                                            printf("*");
                                 }
                                 else
                                 {
                                            printf(" ");
                                 }
                      }
                      for (int c = 1; c <= r - 1; c++)
                      {

                                 if (r == 5 || r == c+1)
                                 {
                                            printf("*");
                                 }
                                 else
                                 {
                                            printf(" ");
                                 }
                      }
                      printf("\n");
           }
}
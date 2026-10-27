/******************************************************************************

KICT EDUCATION PVT. LTD.
EL- 6,10,15,19 Manorath Complex, Sattadhar Cross Road, Ghatlodiya Ahmedabad - 380061
Manav Patel Sir : +91 9909766990
Ketan Patel Sir : +91 9998634381
Website : www.kictindia.com

*******************************************************************************/

// Q-27 Write a C program to check whether two matrices are equal or not.
#include <stdio.h>
int main()
{
           int a[2][2], b[2][2], r, c, d, x = 0, y, sum[2][2];
           printf("first matrics\n");
           for (r = 0; r < 2; r++)
           {
                      for (c = 0; c < 2; c++)
                      {
                                 scanf("%d", &a[r][c]);
                      }
           }
           printf("second matrics\n");
           for (r = 0; r < 2; r++)
           {
                      for (c = 0; c < 2; c++)
                      {
                                 scanf("%d", &b[r][c]);
                      }
           }
           printf("\n");
           for (r = 0; r < 2; r++)
           {
                      for (c = 0; c < 2; c++)
                      {
                                 if (a[r][c] == b[r][c])
                                 {
                                            x++;
                                 }
                      }
           }
           for (r = 0; r < 2; r++)
           {
                      for (c = 0; c < 2; c++)
                      {
                                 if (x == 4)
                                 {
                                            printf("%d ", a[r][c]);
                                 }
                      }
           }
           return 0;
}
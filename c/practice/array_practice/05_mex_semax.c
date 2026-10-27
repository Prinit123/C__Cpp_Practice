#include <stdio.h>
int main()
{
           int mark[5], max = 0, se_max = 0;

           for (int i = 0; i < 5; i++)
           {
                      printf("Enter n number :");
                      scanf("%d", &mark[i]);
           }

           for (int j = 0; j < 5; j++)
           {
                      printf("%d ", mark[j]);
           }

           max = mark[0];
           for (int i = 0; i < 5; i++)
           {
                      if (mark[i] > max)
                      {
                                 max = mark[i];
                      }
           }

           printf("\nmax value is :%d\n", max);

           se_max = mark[0];
           for (int k = 0; k < 5; k++)
           {
                      if (mark[k] > se_max && mark[k] < max)
                      {
                                 se_max = mark[k];
                      }
           }
           printf("Second max value is: %d\n", se_max);
}
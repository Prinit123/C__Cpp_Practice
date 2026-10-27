

#include <stdio.h>
int main()
{
           int num[5];
           int n = 5;

           for (int i = 0; i < n; i++)
           {
                      printf("Enter n number :");
                      scanf("%d", &num[i]);
           }

           for (int j = 0; j < n; j++)
           {
                      printf("%d ", num[j]);
           }
           printf("\n");

           for (int i = 0; i < n; i++)
           {
                      int fre = 1;
                      for (int j = i + 1; j < n; j++)
                      {
                                 if (num[i] == num[j])
                                 {
                                            for (int k = j; k < n; k++)
                                            {
                                                       num[k] = num[k + 1];
                                            }
                                            n--;
                                            j--;
                                 }
                      }
           }
           for (int i = 0; i < n; i++)
           {
                      printf("%d ", num[i]);
           }
}
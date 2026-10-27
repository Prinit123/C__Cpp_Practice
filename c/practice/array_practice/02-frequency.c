

#include <stdio.h>
int main()
{
           int num[5], fre;

           for (int i = 0; i < 5; i++)
           {
                      printf("enter n number : ");
                      scanf("%d", &num[i]);
           }
for (int j = 0; j < 5; j++)
{
           printf("%d ", num[j]);

}
           for (int i = 0; i < 5; i++)
           {
                      fre = 1;
                      for (int j = i + 1; j < 5; j++)
                      {
                                 if (num[i] == num[j])
                                 {
                                            fre++;
                                            num[j] = -1;
                                 }
                      }
                      if (num[i] != -1)
                      {
                                 printf(" %d is %d times:\n", num[i], fre);
                      }
           }
}

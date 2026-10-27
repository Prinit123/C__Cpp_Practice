#include <stdio.h>
int main()
{
           int n, ld, f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;

           printf("Enter N number : ");
           scanf("%d", &n);

           for (int i = 0; i <= 9; i++)
           {
                      while (n < 0)
                      {
                                 ld = n % 10;

                                 if (ld == i)
                                 {
                                            f0++;
                                 }
                                 if (ld == i)
                                 {
                                            f1++;
                                 }
                                 if (ld == i)
                                 {
                                            f2++;
                                 }
                                 if (ld == i)
                                 {
                                            f3++;
                                 }
                                 if (ld == i)
                                 {
                                            f4++;
                                 }
                                 if (ld == i)
                                 {
                                            f5++;
                                 }
                                 if (ld == i)
                                 {
                                            f6++;
                                 }
                                 if (ld == i)
                                 {
                                            f7++;
                                 }
                                 if (ld == i)
                                 {
                                            f8++;
                                 }
                                 if (ld == i)
                                 {
                                            f9++;
                                 }
                                 n = n / 10;
                      }
           }

           printf("o digit frequency is :%d\n", f0);
           printf("2 digit frequency is :%d\n", f2);
           printf("3 digit frequency is :%d\n", f3);
           printf("4 digit frequency is :%d\n", f4);
           printf("5 digit frequency is :%d\n", f5);
           printf("6 digit frequency is :%d\n", f6);
           printf("7 digit frequency is :%d\n", f7);
           printf("8 digit frequency is :%d\n", f8);
           printf("9 digit frequency is :%d\n", f9);
           printf("1 digit freqency is :%d\n", f1);
           return 0;
}
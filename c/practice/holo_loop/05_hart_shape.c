#include <stdio.h>

int main()
{
           for(int r=3; r<=5; r++){
                      for(int c=1; c<=6-r;c++){
                                 printf(" ");
                      }
                      // r+2 for print 1+2 mans first row print 3 star and second row print 2+2 = 4star.
                      for(int c=1; c<=r; c++){
                                 printf("*");
                      }
                      for(int c=1; c<=r-1; c++){
                                 printf("*");
                      }
                      for(int i=1; i<=6-r; i++){
                                 printf(" ");
                      }
                      for(int c=1; c<=5-r; c++){
                                 printf(" ");
                      }
                      for(int c=1; c<=r; c++){
                                 printf("*");
                      }
                      for(int c=1; c<=r-1; c++){
                                 printf("*");
                      }
                      // for()
                      printf("\n");
           }

           for(int r=1; r<=10; r++){
                      for(int c=1; c<=r; c++){
                                 printf(" ");
                      }
                      for(int c=1; c<=11-r; c++){
                                 printf("*");
                      }
                      for(int c=1; c<=10-r; c++){
                                 printf("*");
                      }
                      printf("\n");
           }




           return 0;
}
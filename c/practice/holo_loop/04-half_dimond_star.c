// #include<stdio.h>
// int main(){
//            for(int r=1; r<=5; r++){
//                       for(int c=1; c<=r; c++){
//                                  printf("*");
//                       }
//                       printf("\n");
//            }
//            for(int r=1; r<=5; r++){
//                       for(int c=1; c<=5-r; c++){
//                                  printf("*");
//                       }
//                       printf("\n");
//            }
// }



#include<stdio.h>
int main(){
           for(int r=1; r<=5; r++){
                      for(int c=1; c<=6-r; c++){
                                 printf(" ");
                      }
                      for(int  c=1; c<=r;c++){
                                 printf("*");
                      }
                      printf("\n");
           }
           for(int r=1; r<=5; r++){
                      for(int c=1; c<=r+1; c++){
                                 printf(" ");
                      }
                      for(int c=1; c<=5-r; c++){
                                 printf("*");
                      }
                      printf("\n");
           }
}
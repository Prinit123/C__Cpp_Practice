// all number is prime number
// 2=1,2
// 5=1,5
// 11=1,11


#include <stdio.h>
int main()
{
           int a = 12;
           int count = 0;

           for (int i = 2; i < a; i++)
           {
                      if (a % i == 0)
                      {
                                 count++;
                      }
           }
           if(count==0){
                      printf("prime number",a);
           }else{
                      printf("not prime number");
           }
}
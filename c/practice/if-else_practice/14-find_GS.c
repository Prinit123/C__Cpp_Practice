#include<stdio.h>
int main(){
           int bs = 22000;
           int hra;
           int da;
           int gs;

           if(bs<=10000){
                      hra = (20*bs)/100;
                      printf("HRA is :%d\n",hra);
                      da = (80*bs)/100;
                      printf("DA is :%d\n",da);
                      gs = hra+da+bs;
                      printf("total salary is : %d\n",gs);
           }
           if(bs<=20000){
                      hra = (25*bs)/100;
                      printf("HRA is :%d\n",hra);
                      da = (90*bs)/100;
                      printf("DA is :%d\n",da);
                      gs = hra+da+bs;
                      printf("total salary is : %d\n",gs);
           }else{
                      hra = (30*bs)/100;
                      printf("HRA is :%d\n",hra);
                      da = (78*bs)/100;
                      printf("DA is :%d\n",da);
                      gs = hra+da+bs;
                      printf("total salary is : %d\n",gs);
           }

}
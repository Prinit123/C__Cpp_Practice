#include<stdio.h>
int prime(int n){
           int count = 1;
           for(int i=2; i<n; i++){
                      if(n%i==0){
                                 count=2;
                                 break;
                      }
           }
           if(count == 2){
                      printf("not prime number: %d\n",n);
           }else{
                      printf("prime number: %d\n",n);
           }
}

int armstrong(int n){
           int t = n;
           int arm = 0;
           for(int i=0; i<3; i++){
                      int ld = 0;
                      ld = n%10;
                      n = n/10;
                      ld = ld * ld *ld;
                      arm = arm + ld;
           }
           if(t==arm){
                      printf("%d   yes ,number is armstrong \n",arm);
           }else{
                      printf("%d  not aremstrong number \n", arm);
           }
}


int perfect(int n){
           int per = 0  ;
           int t = n;
           for(int i=1; i<n; i++){
                      if(n%i==0){
                                 per = per + i;
                      }
           }
           if(per == t){
                      printf("%d perfect number \n" , t);
           }else{
                      printf("%d  not ,perfect number\n " ,t);
           }
}
int main(){
           int n;
           printf("enter  n number: ");
           scanf("%d",&n);
           prime(n);
           armstrong(n);
           perfect(n);
}
#include<stdio.h>
int prime(int n){
           int p, count = 1;
           for(int i=2; i<=n; i++){
                      for(int j=2; j<i; j++){
                                 if(i%j!=0){
                                            count = 2;
                                           
                                 }
                                 if(count == 2){
                                             p = i;
                                            printf("%d",p);
                                 }
                      }
           }
}
int main(){
           int n;
           printf("etner n number :");
           scanf("%d",&n);
           prime(n);

}
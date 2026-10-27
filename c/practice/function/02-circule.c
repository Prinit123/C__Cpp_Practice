#include<stdio.h>
int dia(int r){
           printf("%d\n",(2*r));
           return 0;
}
int cir(int r){
           printf("%f\n",(2*(3.14*r)));
           return 0;
}
int area(int r){
           printf("%f\n",(3.14*(r*r)));
           return 0;
}
int main(){
           int r;
           printf("enter r radius :");
           scanf("%d",&r);
           dia(r);
           cir(r);
           area(r);
           return 0;
}
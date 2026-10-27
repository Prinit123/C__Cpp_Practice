#include<stdio.h>
int main(){
           char cha ;
           printf("enter a character :");
           scanf("%c",&cha);

           if((cha>='a' && cha<='z')||(cha>='A' && cha<='Z')){
                      printf(" character is alphabet ");
           }else{
                      printf("character is not alphabet ");
           }
}
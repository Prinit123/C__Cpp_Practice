#include<stdio.h>
int main(){
           char ch ;
           printf("enter character :");
           scanf("%c",&ch);

           if(ch>='a' && ch<='z'){
                      printf("ch is lower case ");
           }else if(ch>='A' && ch<='Z'){
                      printf("ch is uper case ");
           }else{
                      printf("enter alphabet ");
           }
}
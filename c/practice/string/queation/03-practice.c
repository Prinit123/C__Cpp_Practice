
// 3. Write a program in C to separate individual characters from a string.
// Test Data :
// Input the string : kictindia.com
// Expected Output :
// The characters of the string are :
// k i c t i n d i a .  c  o  m

#include<stdio.h>
int main(){
           char name[100] ="kictindia.com";
           printf("The characters of the string : \n");

           // printf("%c",name[0]);
           for(int i=0; i<=strlen(name) ; i++){
                      printf("%c  ",name[i]);
           }

}
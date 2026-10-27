
// 2. Write a program in C to find the length of a string without using library functions.
// Test Data :
// Input the string : kictindia.com
// Expected Output :
// Length of the string is : 13'


#include<stdio.h>
int main(){
           char name[100] = "kictindia.com";
           int count = 0;
           for(int i=0; name[i] != '\0'; i++){
                      count++;
           }
           printf("length of the string is : %d",count);
}
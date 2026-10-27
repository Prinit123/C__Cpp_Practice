
// 5. Write a program in C to count the total number of words in a string.
// Test Data :
// Input the string : This is kictindia.com
// Expected Output :
// Total number of words in the string is : 3

#include<stdio.h>
#include<string.h>
int main(){
           char name[100] = "this is kictindia.com";
           int c=1;
           for(int i=0; i<=strlen(name) ; i++){
                      if(name[i] ==' ' || name[i] =='\t' || name[i]== '\n'){
                      c++;
                      }
           }
           printf("count %d\n",c);
}

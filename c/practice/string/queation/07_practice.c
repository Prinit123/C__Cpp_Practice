// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
// Test Data :
// Input the string : Welcome to kictindia.com since 1993
// Expected Output :
// Number of Alphabets in the string is : 26
// Number of Digits in the string is : 4
// Number of Special characters in the string is : 6


#include<stdio.h>
#include<string.h>
int main(){
           char name[100] = "Welcome to kictindia.com since 1993";

           int i=1;
           int counta=0;
           int countd=0;
           int counts=0;
           while (name[i]!='\0')
           {
                      if(name[i]=='a' && name[i]=='z'){
                                 counta++;
                      }
                      if(name[i]>=0){
                                 countd++;
                      }
                      if((name[i]!='a' && name[i]!='z')||(!(name[i]>=0))){
                                 counts++;
                      }
           }
           printf("alphabet %d")
           
}
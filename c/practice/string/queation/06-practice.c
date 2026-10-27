// 6. Write a program in C to compare two strings without using string library functions.
// Test Data :
// Check the length of two strings:
// --------------------------------
// Input the 1st string : aabbcc
// Input the 2nd string : abcdef
// String1: aabbcc
// String2: abcdef
// Expected Output : Strings are not equal.

// Check the length of two strings:
// --------------------------------
// Input the 1st string : aabbcc
// Input the 2nd string : aabbcc
// String1: aabbcc
// String2: aabbcc
// Expected Output : Strings are equal.



// #include<stdio.h>
// #include<string.h>

// int main(){

//            char first[100] = "aabbcc";
//            char second[100] = "abcdef";
//            char equal[100] = "string is equal";

//            for(int i=0; i<=strlen(first); i++){
//                       for(int j=0; j<=strlen(second); j++){
//                                  if(first[i]==second[j]){
//                                             equal;
//                                  }
//                       }
//            }
//            printf(equal);
//            return 0;

// }

#include<stdio.h>
#include<string.h>

// int main(){

//            char first[100] = "aabbcc";
//            char second[100] = "abcdef";
//            char equal[100] = "string is equal";
//            char notequal[100] = "string not equal";
//            int i=0;
//            int equalstr = 1;

//            while(first[i] != '\0' && second[i] != '\0'){
//                       if(first[i] != second[i]){
//                                  equalstr = 0;
//                                  break;
//                       }
//                       i++;
//            }
//            if(first[i] != '\0' || second[i] != '\0'){
//                       equalstr = 0;
//            }
//            if(equalstr==1){
//                       printf("string is equal");
//            }else{
//                       printf("string is not equal");
//            }
//            return 0;

// }



int main(){

           char first[100] = "aabbcc";
           char second[100] = "aabbcc";
           char equal[100] = "string is equal";
           char notequal[100] = "string not equal";
           int i=0;
           int equalstr = 1;

           while(first[i] != '\0' && second[i] != '\0'){
                      if(first[i] != second[i]){
                                 equalstr = 0;
                                 break;
                      }
                      i++;
           }
           if(first[i] != '\0' || second[i] != '\0'){
                      equalstr = 0;
           }
           if(equalstr==1){
                      printf("string is equal");
           }else{
                      printf("string is not equal");
           }
           return 0;

}



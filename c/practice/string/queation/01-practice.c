// // 1. Write a program in C to input a string and print it.
// // Test Data :
// // Input the string : Welcome, Kict Education
// // Expected Output :
// // The string you entered is : Welcome, Kict Education

// // #include<stdio.h>
// // int main(){
// //            char data;

// // }

// #include <stdio.h>

// int main()
// {
//            char str[100];

//            // Input the string
//            printf("Input the string : ");

//            /*
//            fgets reads the string including spaces.
//            sizeof(str) ensures we don't overflow the buffer.
//            stdin tells the program to read from the keyboard.
//            */
//            fgets(str, sizeof(str), stdin);

//            // Output the string
//            printf("The string you entered is : %s", str);

//            return 0;
// }

#include<stdio.h>
int main(){
           char name[100];

           scanf("%s",&name);
           printf("%s",name);
}
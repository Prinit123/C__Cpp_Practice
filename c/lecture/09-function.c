
// there are two types in function .
// 1. user defined functions.
// 2. library function.     //  OR  pre defind function

// ex.
//  1. scanf and printf are Library Functions.
//  2. fact or any-thing else is a User-Defined Function.

// #include<stdio.h>

// there are strcture based function .
// tpe -1  no parameter and no return type
// type -2 parameter but no return type
// type -3 no parameter but return type
// type -4 parameter and return type

// type -1
// #include<stdio.h>

// void type1(){

//            for(int i=1; i<=10; i++){
//                       printf("%d\n",i);
//            }
// }
// int main(){
//            type1();
//            return 0;
// }

// #include<stdio.h>

// void type2(int n){

//            for(int i=1; i<=n; i++){
//                       printf("%d\n",i);
//            }
// }
// int main(){
//            int n;
//            printf("etner n number : ");
//            scanf("%d",&n);
//            type2(n);
//            return 0;
// }

// #include <stdio.h>

// int type4(int n , int i)
// {
//            int sum = 0;

//            return n+i; 
// }

// int main()
// {
//            int n,i;
//            printf("Enter a number: ");
//            scanf("%d", &n);
//            printf("Enter a number: ");
//            scanf("%d", &i);

//            printf("The total sum is: %d\n", type4(n,i));

//            return 0;
// }




#include <stdio.h>

int type3()
{
           int sum = 0;
           int n;
           int i ;
           printf("Enter a number: ");
           scanf("%d", &n);
           printf("Enter a number: ");
           scanf("%d", &i);
           return n+i; 
}

int main(){

           printf("The total sum is: %d\n", type3());

           return 0;
}



// ex.

// 1. void factType1() {
// int n, f = 1;
// printf("Enter a number: ");
// scanf("%d", &n);
// for (int i = 1; i <= n; i++)
//     f *= i;
// printf("Factorial is: %d\n", f);           // no return .
// }

// 2.

// 3. int factType3() {
// int n, f = 1;
// printf("Enter a number: ");
// scanf("%d", &n);
// for (int i = 1; i <= n; i++)
//     f *= i;
// return f;
// }

// 4. int factType4(int n) {
// int f = 1;
// for (int i = 1; i <= n; i++)
//     f *= i;
// return f;
// }

// int add(int a,int b)
// {
//     return a+b;

// }

// int main()
// {

//     int a=12,b=45;

//     printf("Sum of two numbers is %d",add(a,b));

// }

// #include <stdio.h>

// void factType2(int n)
// {
//            int f = 1;
//            for (int i = 1; i <= n; i++)
//            {
//                       f *= i;
//            }
//            // Print once AFTER the loop finishes
//            printf("Factorial is: %d\n", f);
// }

// int main()
// {
//            factType2(10); // Correct: Just call it.
//            return 0;
// }

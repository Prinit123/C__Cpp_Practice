// #include <stdio.h>

// int main()
// {
//            int arr[5];
//            int *ptr = arr; // Set pointer to the start of the array

//            printf("Enter 5 integers:\n");

//            // Input using pointer increment
//            for (int i = 0; i < 5; i++)
//            {
//                       printf("Element %d: ", i + 1);
//                       scanf("%d", ptr); // No '&' needed because ptr is already an address
//                       ptr++;            // Increment: Move pointer to the next integer
//            }

//            // Reset: Bring pointer back to the first element
//            ptr = arr;

//            printf("\nDisplaying elements using pointer notation:\n");
//            for (int i = 0; i < 5; i++)
//            {
//                       // Dereference the pointer to get the value
//                       printf("Value at index %d = %d\n", i, *ptr);
//                       ptr++; // Increment: Move to the next memory location
//            }

//            return 0;
// }

// #include <stdio.h>

// // Function takes two integer pointers as arguments
// int getLarger(int *ptr1, int *ptr2)
// {
//            // Dereference the pointers to compare the actual values
//            if (*ptr1 > *ptr2)
//            {
//                       return *ptr1;
//            }
//            else
//            {
//                       return *ptr2;
//            }
// }

// int main()
// {
//            int num1, num2;

//            printf("Enter two integers: ");
//            scanf("%d %d", &num1, &num2);

//            // Pass the addresses of the variables using the & operator
//            int larger = getLarger(&num1, &num2);

//            printf("The larger value is: %d\n", larger);

//            return 0;
// }

// #include<stdio.h>
// int main(){

//            int a,b,*c,*d;

//            a=10;
//            b=20;
//            c = &a;
//            d = &b;
//            printf("%d",*d);
// }

#include <stdio.h>

// Function takes two integer pointers as arguments
int getLarger(int *ptr1, int *ptr2)
{
           // Dereference the pointers to compare the actual values
           if (*ptr1 > *ptr2)
           {
                      return *ptr1;
           }
           else
           {
                      return *ptr2;
           }
}

int main()
{
           int num1, num2;

           printf("Enter two integers: ");
           scanf("%d %d", &num1, &num2);

           // Pass the addresses of the variables using the & operator
           int larger = getLarger(&num1, &num2);

           printf("The larger value is: %d\n", larger);

           return 0;
}
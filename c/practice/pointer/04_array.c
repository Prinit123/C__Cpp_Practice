
// #include <stdio.h>

// int main()
// {
//            int a[100];
//            int *d;

//            for (int i = 0; i < 5; i++)
//            {
//                       printf("Enter array number: ");
//                       scanf("%d", &a[i]);

//                       printf("Elements entered so far: ");
//                       // This inner loop uses d to visit each address in the array
//                       for (int j = 0; j <= i; j++)
//                       {
//                                  d = &a[j];         // d points to the current element in the sub-loop
//                                  printf("%d ", *d); // print the value at that address
//                       }
//                       printf("\n");
//            }
//            return 0;
// }

#include <stdio.h>
int main()
{
           int a[100];
           int *d;
           for (int i = 0; i < 5; i++)
           {
                      printf("enter array number :");
                      scanf("%d", &a[i]);

                      for (int j = 0; j <= i; j++)
                      {
                                 d = &a[j];
                                 printf("%d ", *d);
                      }
                      // printf("%d",*d);
                      printf("\n");
           }
           return 0;
}

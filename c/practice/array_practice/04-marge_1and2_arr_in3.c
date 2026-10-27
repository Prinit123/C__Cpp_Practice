
#include <stdio.h>
int main()
{
           int n1, n2, n3;

           printf("enter n number : ");
           scanf("%d", &n1);
           int arr1[n1];
           for (int i = 0; i < n1; i++)
           {
                      printf("enter array element : ");
                      scanf("%d", &arr1[i]);
           }

           printf("enter n2 number : ");
           scanf("%d", &n2);
           int arr2[n2];

           for (int i = 0; i < n2; i++)
           {
                      printf("enter array element :");
                      scanf("%d", &arr2[i]);
           }
           printf("\n");

           n3 = n1 + n2;
           int arr3[n3];

           // for(int i=0;i<n3;i++){
           //            printf("enter array element :");
           //            scanf("%d",&arr3[n3]);
           // }

           for (int i = 0; i < n1; i++)
           {
                      arr3[i] = arr1[i];
           }

           for (int i = 0; i < n2; i++)
           {
                      arr3[n1 + i] = arr2[i];
           }

           for (int i = 0; i < n3; i++)
           {
                      printf("%d ", arr3[i]);
           }
}
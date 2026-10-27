#include <stdio.h>

int main()
{
           int n;
           int t1 = 0, t2 = 1;
           int nextTerm;

           // Ask the user for the number of terms
           printf("Enter the number of terms: ");
           scanf("%d", &n);

           printf("Fibonacci Series: ");

           for (int i = 1; i <= n; ++i)
           {
                      printf("%d, ", t1);

                      // Calculate the next number in the sequence
                      nextTerm = t1 + t2;

                      // Update variables for the next loop iteration
                      t1 = t2;
                      t2 = nextTerm;
           }

           printf("\n");
           return 0;
}

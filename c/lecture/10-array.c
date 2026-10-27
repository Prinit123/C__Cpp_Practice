// array have not  pre-defind function

//  because :- You cannot use syntax like array.length(), array.sort(), or array.append() that you might see in object-oriented languages like C++, Java, or Python.

// array is a collection of elements of the same data type stored in contiguous (adjacent) memory locations. It allows you to store multiple values in a single variable, rather than declaring separate variables for each value.

// array

// #include<stdio.h>
// int main()
// {
//            int mark[5];
//            for(int i=0;i<5;i++){
//                                  printf("enter  n number :");
//                                  scanf("%d",&mark[i]);
//            }
//            for(int i=0;i<5;i++){
//                                  printf("%d ",mark[i]);
//            }
// }

// #include<stdio.h>
// int main()
// {
//            int mark[2][2];
//            for(int i=0;i<2;i++){
//                       for(int j=0; j<2; j++){
//                                  printf("enter  n number :");
//                                  scanf("%d",&mark[i][j]);
//                       }
//            }
//            for(int i=0;i<2;i++){
//                       for(int j=0; j<2; j++){
//                                  printf("%d ",mark[i][j]);
//                       }
//                       printf("\n");
//            }
//            return 0;
// }

#include<stdio.h>

int main(){
           int mark[5] = {12,23,34,45,56};

           // Total bytes (20) divided by bytes of one element (4)
           int length = sizeof(mark) / sizeof(mark[0]);

           printf("%d\n",sizeof(mark));
           printf("%d",length);
}
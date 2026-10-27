#include<stdio.h>
int main()
{
           int arr[5];

           for(int i=0;i<5;i++){
                      printf("enter n number : ");
                      scanf("%d",&arr[i]);
           }

           for(int i=0;i<5;i++){
                      printf("%d ",arr[i]);
           }

           int fre;
           for(int i=0;i<5;i++){
                      fre=1;
                      for(int j=i+1;j<5;j++){
                                 if(arr[i]==arr[j]){
                                            fre++;
                                            arr[j]=-1;
                                 }
                                 
                      }
                      if(arr[i]!=-1){
                                            printf("\n%d frequency is : %d\n",arr[i],fre);
                                 }
           }
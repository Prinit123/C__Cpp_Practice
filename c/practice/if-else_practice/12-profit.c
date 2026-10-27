#include<stdio.h>
int main()
{
           int buy ;
           int sell ;
           int profit ;
           int loss;
           printf("enter buy : ");
           scanf("%d",&buy);
           printf("enter sell :");
           scanf("%d",&sell);

           if(buy<sell){
                      profit = buy - sell;
                      printf("profit is : %d ",profit);
           }else{
                      loss = buy - sell ;
                      printf("loss is : %d ",loss);
           }
}
#include<stdio.h>
int main()
{
           int math ;
           int com;
           int phy;
           int che;
           int bio;

           printf("enter math marks: ");
           scanf("%d",&math);
           printf("enter com marks :");
           scanf("%d",&com);
           printf("enter phy marks: ");
           scanf("%d",&phy);
           printf("enter che marks : ");
           scanf("%d",&che);
           printf("enter bio marks : ");
           scanf("%d",&bio);

           int p = (math+com+phy+che+bio)/5;

           if(p>=90){
                      printf("grade A");
           }
           if(p>=80){
                      printf("grade B");
           }
           if(p>=70){
                      printf("grade C");
           }
           if(p>=60){
                      printf("grade D");
           }if(p>=50){
                      printf("grade E");
           }
           else{
                      printf("fail");
           }
}
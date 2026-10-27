#include<stdio.h>
int main(){
           FILE *fp ;

           int age ;
           float weight;
           char a[25];
           fp = fopen("example5.txt","r");
           if(fp==NULL){
                      perror("fopen");    //reason why not open file.
                      return 1;           //return 1 = means terminate program or file closed.
           }else{

                      // fscanf(fp,"%d %f",&age,&weight);

                      // if(fscanf(fp,"%d %f %s",&age,&weight,a)==3){
                      //            printf("age %d weight : %f string: %s",age,weight,a);
                      // }else{
                      //            printf("we have not receive value");
                      // }

                      if(fscanf(fp,"%d %f %24[^\n]",&age,&weight,a)==3){    //for full name print
                                                                        // 24 character and ^\n=cotinue
                                                                   // read tofor new line not received.
                                 printf("age %d weight : %f string: %s",age,weight,a);
                      }else{
                                 printf("we have not receive value");
                      }


                      fclose(fp);
           }
}
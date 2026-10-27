#include<stdio.h>
int main(){
           FILE *fp;

           char a[100] = "welcome to kict";
           fp = fopen ("example0.txt","w");

           if(fp==NULL){
                      perror("fopen");
                      return 1;
           }
           else{
                      char ch ;
                      ch = fputs(a,fp);

                      printf("sucess full open file");
                      fclose(fp);
           }


}
#include<stdio.h>
int main(){
           FILE *fp ;

           int age ;
           float weight;
           char a[25];
           fp = fopen("example6.txt","w");
           if(fp==NULL){
                      perror("fopen");    //reason why not open file.
                      return 1;           //return 1 = means terminate program or file closed.
           }else{

                      fprintf(fp ,"welcome to kict");
                      fprintf(fp, "\nname : %s age : %d","prinit",34);
                      // printf(fprintf);

                      fclose(fp);
                      return 0;
           }
}
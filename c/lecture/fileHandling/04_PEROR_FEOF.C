// #include<stdio.h>
// int main(){
//            FILE *fp ;

//            fp = fopen("example4.txt","r");
//            if(fp==NULL){
//                       perror("fopen");    //reason why not open file.
//                       return 1;           //return 1 = means terminate program or file closed.
//            }else{
//                       int ch;

//                       while((ch = fgetc(fp)) != EOF)    //(EOF = -1 =  OR END OF FILE)
//                       {
//                                  putchar(ch);           //not requried for increment or decrement it`s function
//                       }



//                       if(feof(fp)){                 //feof(fp) = it`s function cheack full file print                           or not any error in file for read.
//                                  printf("\ncomplate file for read");
//                       }

//                       fclose(fp);
//            }
// }





#include<stdio.h>
int main(){
           FILE *fp ;

           fp = fopen("example4.txt","r");
           if(fp==NULL){
                      perror("fopen");    //reason why not open file.
                      return 1;           //return 1 = means terminate program or file closed.
           }else{
                      char  ch;

                     ch = fgetc(fp);       // this time not show complate file for read.
                     printf("%c",ch);



                      if(feof(fp)){                 //feof(fp) = it`s function cheack full file print                           or not any error in file for read.
                                 printf("\ncomplate file for read");
                      }

                      fclose(fp);
           }
}
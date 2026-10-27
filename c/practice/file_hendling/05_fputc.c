// fputs (short for file put string) is a standard C library function used to write a null-terminated string to a file stream.


// It is simpler than fprintf because it doesn't handle formatting (like %d or %f); it just takes the characters in your string and places them directly into the file.



#include<stdio.h>
int main(){
           FILE *fp;

           char a[100] = "welcome to kict";
           fp = fopen("example5.txt","w");

           if(fp != NULL){

                      fputs(a ,fp);

                      fputs("\n this is for next line",fp);

                      printf("successful print data");
                      fclose(fp);
           }else{
                      printf("failed for print data");
                      fclose(fp);
           }

}
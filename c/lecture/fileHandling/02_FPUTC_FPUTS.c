// #include<stdio.h>
// int main(){
//            FILE *fp;

//            fp = fopen("example2.txt","w");

//            if(fp == NULL){
//                       printf("file not open");
//            }else{

//                       fputc('A',fp);
//                       fputc('B',fp);
//                       fputc(67,fp);
//                       fclose(fp);
//            }

// }

// #include <stdio.h>
// int main()
// {
//            FILE *fp;

//            char data[] = "welcome to kict";

//            fp = fopen("example2.txt", "w");

//            if (fp == NULL)
//            {
//                       printf("file not open");
//            }
//            else
//            {

//                       int index =0;
//                       char ch = '\0';
//                       while (data[index] != '\0')        // (\0) STRING TERMINASION CHARACTER.
//                       {
//                                  ch = fputc(data[index], fp);
//                                  index++;
//                       }

//                       fclose(fp);
//            }
// }


#include<stdio.h>
int main()
{
           FILE *fp;

           // char data[] = "welcome to kict";

           fp = fopen("example2.txt", "w");

           if (fp == NULL)
           {
                      printf("file not open");
           }
           else
           {

                      fputs("welcome to kict",fp);
                      fputs("\n223 , 34,m ,printf",fp);

                      fclose(fp);
           }
}
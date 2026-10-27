
// fgetc

// #include<stdio.h>
// int main(){
//            FILE *fp;

//            fp = fopen("example3.txt","r");
//            if(fp==NULL){
//                       printf("not generate file");
//            }else{
//                       char string = '\0';
//                       // string = fgetc(fp);
//                       // printf(" %d %c",string,string);

//                       while((string = fgetc(fp)) != EOF)    //(EOF = -1 =  OR END OF FILE)
//                       {
//                                  printf("%c",string);
//                                  string++;
//                       }
//                       fclose(fp);
//            }
// }

// fgets

#include <stdio.h>
int main()
{
           FILE *ftp;

           char a[100] ;

           ftp = fopen("example3.txt", "r");
           if(ftp==NULL){
                      perror("fopen");
                      return 1;
           }else{

                      fgets(a,sizeof(a),ftp);

                      //     use of [ sizeof(a) ] To understand why that third argument (size) is so
                      // important, think of it as a safety railing. Without it, the function wouldn't know 
                      // when to stop reading, which could lead to a buffer overflow.





                      printf("name : %s",a);


           // fprintf(ftp, "\nhello kict");
           fclose(ftp);
           return 0;
           }
}
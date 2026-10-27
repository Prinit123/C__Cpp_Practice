// #include<stdio.h>
// int main(){
//            FILE *fp;
//            char name[100] = "Krishna computer course";

//            fp= fopen("example7.txt","w");
//            // fprintf(fp,name);
//            if(fp == NULL){
//                       printf("file not open");
//            }else{
//                       printf("file is open");
//                       // fprintf(fp,name);
//                       fputs(name,fp);
//                       // fputs(name);
//                       fclose(fp);

//            }
//            return 0;
// }

#include <stdio.h>
int main()
{
           FILE *fp;
           char name[100];

           fp = fopen("example7.txt", "r");
           // fprintf(fp,name);
           if (fp == NULL)
           {
                      printf("file not open");
                      return 1;
           }
           else
           {
                      printf("file is open");
                      printf("\n%s", name[1]);

                      // while (fgets(name, sizeof(name), fp) != NULL);
                      // {
                      //            printf("\n%s", name);
                      // }

                      // printf(fgets(name, 100, fp));
                      fclose(fp);
           }
           return 0;
}

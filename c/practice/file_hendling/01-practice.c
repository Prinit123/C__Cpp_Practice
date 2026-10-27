#include <stdio.h>
int main()
{
        //    FILE *ftp;

        //    char f[1] = "";

        //    ftp = fopen("example.txt", "w");
        //    if (ftp == NULL)
        //    {
        //               printf("FIle not opened");
        //    }
        //    else
        //    {
        //               fputs(f, ftp);
        //               fclose(ftp);

        //               printf("File created and writed");
        //    }

           FILE *ftp;

           char a[100];

           ftp = fopen("example.txt", "r");
           if (ftp == NULL)
           {
                      printf("FIle not opened");
           }
           else
           {
                      while (fgets(a, 3, ftp))
                      {
                                 printf("%s\n", a);
                      }
                      fclose(ftp);
           }
}

// #include<stdio.h>
// int main(){
//     FILE *ftp = NULL;

//     char a[100] = "";
    
//     ftp = fopen("exampale20.txt","w");
//     fgets(a,3,ftp);
//     fputs(a,ftp);
//     printf("file is created");
//     fclose(ftp);


//     // if(ftp == NULL){
//     //     printf("FILE NOT found");
//     // }
//     // else{
//     //     fputs(a,ftp);
//     //     fclose(ftp);
//     //     printf("file is open");
//     // }
// }

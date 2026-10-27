// // pointer data type  use for represent  file or nodes like r,w,a.



// #include<stdio.h>

// int main(){
//     // mode  : w(create , rewrite), r(read,error), a(append , write), a+(append ,read), w+(write, read), r+(write , read)
//     // FILE *f = fopen("data.txt", "w");  
//     // fprintf(f, "hello\n");
//     // fprintf(f,"kict computer class\n");
//     // fclose(f);

//     // FILE *prinit = fopen("data.txt", "a");
//     // fprintf(prinit, "my name is krish\n");
//     // fclose(prinit);

//     // char ch;
//     // FILE *fr = fopen("data.txt", "r");
//     // ch = getc(fr);
//     // printf("%c",ch);
//     // // while((ch = getc(fr)) != EOF){
//     // //     printf("%c", ch);
//     // // }
//     // fclose(fr);

//     char ch;
//     FILE *fwr = fopen("data.txt", "r+");
//     while((ch = getc(fwr)) != EOF){
//         printf("%c", ch);
//     }

//     fprintf(fwr, "hello again\n");


//     return 0;
// }

#include<stdio.h>
int main(){
    // FILE *fp = fopen("exampale1.txt","w");
    // fprintf(fp , "hello my whorld ! \n");
    // fprintf(fp,"kict computer class");
    // fclose(fp);

    // FILE *fp = fopen("exampale1.txt","r");
    // char ch ;
    // // ch = getc(fp);
    // while ((ch = getc(fp)) != EOF)
    // {
    //    printf("%c",ch);
    // }
    // // printf("%c",ch);
    // fclose(fp);


}
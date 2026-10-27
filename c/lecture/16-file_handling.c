// File handling is the process by which a computer program stores,
// retrieves, and manages data on a permanent storage device (like a hard
// drive or SSD) rather than keeping it only in the computer's temporary
// memory (RAM).

#include <stdio.h>
int main()
{
   FILE *ftp;

   char a[100] = "Welcome to kict";

   ftp = fopen("example.txt", "w");

   fprintf(ftp, "hello to kict");
   fprintf(ftp, a);

   // fputs(character, fp);  //use for write.
   // fgets(fp);             //use for read.
   fputs("\nhello, i am teacher\n", ftp);
   fclose(ftp);
   // fprintf(ftp,"\nhello kict");
}
// FILE *ftp;

// char a[100] = "Welcome to kict";

// ftp = fopen("example.txt", "w");
// if (ftp == NULL)
// {
//    printf("FIle not opened");
// }
// else
// {
//    fputs(a, ftp);
//    fclose(ftp);

//    printf("File created and writed");
// }


// #include <stdio.h>

// int main()
// {
//     FILE *fp;
//     char ch;

//     // Open file in read mode
//     fp = fopen("example.txt", "r");

//     // Check if file opened successfully
//     if (fp == NULL)
//     {
//         printf("File not found!");
//         return 1;
//     }

//     // Read file character by character
//     while ((ch = fgetc(fp)) != EOF)
//     {
//         printf("%c", ch);
//     }

//     // Close the file
//     fclose(fp);

//     return 0;
// }

//    FILE *ftp;

//    char a[100];

//    ftp = fopen("example.txt", "r");
//    if (ftp == NULL)
//    {
//       printf("FIle not opened");
//    }
//    else
//    {
//       while (fgets(a, 100, ftp))
//       {
//          printf("%s\n", a);
//       }

//       fclose(ftp);
//    }
// }

/*
// fputs(character, fp);  //use for write.
   // fgets(fp);             //use for read.

| Mode | Meaning       |
| ---- | ------------- |
| r    | Read          |
| w    | Write         |
| a    | Append        |
| r+   | Read + Write  |
| w+   | Write + Read  |
| a+   | Append + Read |
| rb   | Read Binary   |
| wb   | Write Binary  |
| ab   | Append Binary |


fopen(fp,mode);
fprintf(fp,"Format",variables);
fscanf(fp,"Format",variable);
fputc(character,fp);
fgetc(fp);
fputs(string.fp);
fgets(string,size,fp);


// binary
// fwrite(&variable,sizeof(variable),1,fp);
fread(&variable,sizeof(variable),1,fp);

// Check end of File
feof(fp)
Example :
while(!feof(fp))
{
   ch=fgetc(fp);
}

// rewind(fp)
// moves pointer to  beginning


//fseek()
// moves file pointer to  specific location.


// ftell()
current position

// remove()
// remove file

rename()
rename the file.


*/
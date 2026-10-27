// The Rule of fscanf();

// fscanf is used to read data that already exists inside a file. Therefore:
// The file must be opened in read mode ("r").
// The file must already have content inside it.


#include<stdio.h>
int main(){
           FILE *fp;

           char a[100];
           int s;

           fp = fopen("example4.txt","r");

           fscanf(fp,"%s %d",a ,&s);
           printf("age is : %d , name is :%s",s,a);
           fclose(fp);

}

// #include <stdio.h>

// int main()
// {
//            FILE *fp;
//            char name[100];
//            int age;

//            // 1. Open for READING
//            fp = fopen("example4.txt", "r");

//            if (fp == NULL)
//            {
//                       printf("File not found!");
//                       return 1;
//            }

//            // 2. Use fscanf to "scan" the file for data
//            // It looks for a string (%s) and an integer (%d)
//            fscanf(fp, "%s %d", name, &age);

//            // 3. Print it to the screen to prove it worked
//            printf("Data from file: Name = %s, Age = %d\n", name, age);

//            // 4. Always close
//            fclose(fp);

//            return 0;
// }


//            text files    store data text form
//            binary file   store data binary form


//use of append for write data but not erage past data means add data



#include<stdio.h>
int main(){

           FILE *file_pointer = NULL;         //new  file open but it's null

           file_pointer = fopen("example1_2.txt","w");
           if(file_pointer == NULL){
                      printf("file is not open");
           }else{
                      printf("file is open ");
                      fclose(file_pointer);
           }

}

// #include<stdio.h>
// int main(){

//            FILE *file_pointer;

//            char a[100] = "welcome to kict !";        //file open and write welcome to kict !

//            file_pointer = fopen("example1.txt","w");
//            if(file_pointer == NULL){
//                       printf("file is not open");
//            }else{

//                       fputs(a,file_pointer);


//                       printf("file is open ");
//                       fclose(file_pointer);
//            }

// }



/*
| Mode | Meaning       |
| ---- | ------------- |
| r    | Read          |
| w    | Write         |
| a    | Append        |         // app = for c++
| r+   | Read + Write  |
| w+   | Write + Read  |
| a+   | Append + Read |
| rb   | Read Binary   |
| wb   | Write Binary  |
| ab   | Append Binary |
*/
// // string function

// //  FUNCTION    WORK OF FUNCTION
// // strlen()     computes string's length
// // strcpy()     copies a string to another
// // strcat()     concatenates(joins) two strings
// // strcmp()     compares two strings
// // strlwr()     converts string to lowercase
// // strupr()     converts string to uppercase


// // #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
           // char a[100] = "krish";
// //            printf("%s",a);

// //            // char b[100];
// //            // printf("Enter a name ");
// //            // scanf("%s",&b);
// //            // printf("%s",b);

// //            // printf = puts
// //            // scanf = gets

// //            char c[100];
// //            printf("Enter a name ");
// //            // scanf("%s",&c[100]);
// //            gets(c);
// //            puts(c);

           //   int  len;
           //   len = Strlen(c);
//            // printf("%d", len);

// //            // char b[100]  = "jenish";
// //            // strcpy(b[100] , c[100]);
// //            // puts(c);
// // }

// // copy one string in onother string strcpy()

// // #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// // char str1[100];
// // // = "Krishna Computer Centre";
// // char str2[100];
// // printf("enter  n umber: ");
// // gets(str1);
// // strcpy(str2, str1);
// // puts(str2);
// // return 0;
// // }

// // #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// //            char str1[100];
// //            // = "Krishna Computer Centre";
// //            char str2[100];
// //            printf("enter  1 umber: ");
// //            gets(str1);
// //            printf("enter  2 umber: ");
// //            gets(str2);
// //            strcat(str2, str1);
// //            puts(str2);
// //            printf("\n");
// //            // puts(str1);
// //            return 0;
// // }

// // combine two string in strcat()

// //  #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// //            char str1[100];
// //            // = "Krishna Computer Centre";
// //            char str2[100];
// //            printf("enter  1 umber: ");
// //            gets(str1);
// //            printf("enter  2 umber: ");
// //            gets(str2);
// //            strcat(str2, str1);
// //            puts(str2);
// //            printf("\n");
// //            // puts(str1);
// //            return 0;
// // }


// // compare two strings use strcmp()

// //  #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// //            char str1[100];
// //            // = "Krishna Computer Centre";
// //            char str2[100];
// //            printf("enter  1 umber: ");
// //            gets(str1);
// //            printf("enter  2 umber: ");
// //            gets(str2);


// //            int result = strcmp(str1,str2);
// //            printf("%d",result);
// //            return 0;
// // }



// // all string convert in lower case strlwr()

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//            char str1[100];
//            printf("enter  1 umber: ");
//            gets(str1);

//            printf("%s\n",strlwr(str1));

//            return 0;
// }

// // #include <stdio.h>
// // #include <string.h>
// // int main()
// // {
// //            char str1[100];
// //            printf("enter  1 umber: ");
// //            gets(str1);

// //            printf("%s\n",strupr(str1));

// //            return 0;
// // }

#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    char source[] = "Apple";
    char destination[20];
    char greeting[30] = "Hello ";

    // 1. Get Length (strlen)
    int length = strlen(source);
    printf("1. Length of '%s' is: %d\n", source, length);

    // 2. Copy String (strcpy)
    strcpy(destination, source); 
    printf("2. Destination after copy: %s\n", destination);

    // 3. Combine Strings (strcat)
    strcat(greeting, "World!"); 
    printf("3. Combined string: %s\n", greeting);

    // 4. Compare Strings (strcmp)
    // It returns 0 if they match perfectly
    if (strcmp(source, "Apple") == 0) {
        printf("4. Match found! The string is Apple.\n");
    } else {
        printf("4. Strings do not match.\n");
    }

    return 0;
}


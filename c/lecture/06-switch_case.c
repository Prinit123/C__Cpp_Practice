// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number (1-3): ");
//     scanf("%d", &n);

//     switch(n) {
//         case 1:
//             printf("one\n");
//             break;
//         case 2:
//             printf("two\n");
//             break;
//         case 3:
//             printf("three\n");
//             break;
//         default:
//             printf("Invalid input! Please enter 1, 2, or 3.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number (1-3): ");
//     scanf("%d", &n);

//     switch(n) {
//         case 1:
//             printf("one\n");
//             break;
//         case 2:
//             printf("two\n");
//             break;
//         case 3:
//             printf("three\n");
//             break;
//         default:
//             printf("Invalid input! Please enter 1, 2, or 3.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number (1-3): ");
//     scanf("%d", &n);

//     switch(n) {
//         case 1:
//             printf("one\n");
//             break;
//         case 2:
//             printf("two\n");
//             break;
//         case 3:
//             printf("three\n");
//             break;
//         default:
//             printf("Invalid input! Please enter 1, 2, or 3.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a=20;
//     int b = 23;

//     int c = a>b?1:0;

//     switch(c) {
//         case 1:
//             printf(" a is max");
//             break;
//         case 0:
//             printf("b is max");
//             break;
//         default:
//             printf("Invalid input! Please enter 1, 2, or 3.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 23;
    int c = 40;

    int d = a > b && a > c ? 1 : 0;
    int e = b > c && b > a ? 1 : 0;

    switch (d)
    {
    case 1:
        printf(" a is max");
        break;
    case 0:
        switch (e)
        {
        case 1:
            printf(" b is max");
            break;

        default:
            printf("c is max");
        

        return 0;
        }
    }
}
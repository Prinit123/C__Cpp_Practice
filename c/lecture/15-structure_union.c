// obj is the variable of the structure. Without creating an object, you cannot store or access data in the structure.


// use for only defined
// 1. Structure (struct)
// A Structure is a container that holds multiple variables (members) of 
// different data types. Each member has its own dedicated memory location,
// meaning all members can be accessed and used simultaneously.




// #include<stdio.h>
// struct kict{

//            int c;
//            float b;
//            char *name ;   //use for pointer for string use
// }obj,obj2;
// int main()
// {
//            obj.name="prinit";
//            // obj.b = 908.345;
//            // obj.a = 10;
//            // obj2.a = 101;
//            // obj2.b = 95408.345;
//            // printf("%d\n",obj2.a);
//            // printf("%f\n",obj2.b);
//            // printf("%d\n",obj.a);
//            printf("%s\n",obj.name);

// }


// 2. Union (union)
// A Union is similar to a structure in syntax, but it stores all its
// members in the same memory location. This means you can only store a
// value in one member at a time. Assigning a value to a new member will
// overwrite the previous one.

// #include <stdio.h>

// struct kict
// {
//            int a;
//            float b;
// } obj; // Global object defined here

// int main()
// {
//            obj.a = 10;
//            obj.b = 908.345;

//            printf("Integer a: %d\n", obj.a);

//            // Using %.3f limits the output to 3 decimal places
//            printf("Float b:   %.3f\n", obj.b);

//            return 0;
// }

// union use for defiend  and use for last value consider and skip first value

// #include<stdio.h>
// union kict{
//            int a;
//            float b;
// }obj,obj2;

// int main()
// {

//            obj2.a=45;
//            // obj.a = 10;
//            obj.b = 908.345;
//            obj.a = 10;
//            printf("%d\n",obj2.a);
//            printf("%d\n",obj.a);
//            printf("%f\n",obj.b);

//            return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct Info{
//     int id;
//     char name[50];
//     float salary;
// // }e3,e4,e5,e6,e7,e8,e9,e10;
// }e[3];
// int main() {
//     int id1 = 12;
//     char name[] ="user1";
//     float salary = 345000;

//     int id2 = 23;
//     char name2[] = "user2";
//     float salary3 = 45000;
//     struct Info e1; // make object of that structure
//     e1.id = 1;
//     e1.salary = 45000;
//     strcpy(e1.name,"user1");  // strcpy(destination, sorce)
    

    // struct Info e2;
    // e2.id = 2;
    // e2.salary = 35000;
    // strcpy(e2.name,"user2");

    // printf("Id : %d\n",e1.id);
    // printf("Id : %d\n",e2.id);
    // printf("Name1 : %s", e1.name);


    // for(int i = 0; i < 3; i++){
    //     printf("Enter your id : ");
    //     scanf("%d",&e[i].id);
    //     printf("Enter your name : ");
    //     scanf("%s",&e[i].name);
    //     printf("Enter your salary : ");
    //     scanf("%f", &e[i].salary);
    // }

    // for(int i = 0; i < 3; i++){
    //     printf("Enter your id : %d\n", e[i].id);
    //     printf("Enter your name : %s\n", e[i].name);
    //     printf("Enter your salary : %f\n",e[i].salary);
    // }
// return 0;
// }


// #include<stdio.h>
// struct print
// {
//     int a;
//     int b;
//     int c;
// }obj[3];

// int main(){
//     obj[1].a = 34;
//     obj[1].b = 45;
//     obj[2].b = 45;
//     printf("%d\n",obj[1].a);
//     printf("%d",obj[1].b);
// }
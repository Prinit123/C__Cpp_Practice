// strsmp() = compare string
// ans = 0 means same string
// ans = -1 means first string not same
// ans = 1 means after first not same



#include<stdio.h>
int main(){
           char a[100];
           char b[100];
           printf("enter name: ");
           gets(a);
           printf("enter name:");
           gets(b);

           int result = strcmp(a,b);
           printf("%d",result);

}
#include<stdio.h>
struct kict{
           int a;
           float b;
}obj,obj2;
int main()
{

           obj.a = 10;
           obj.b = 908.345;
           obj2.a = 101;
           obj2.b = 95408.345;
           printf("%d\n",obj2.a);
           printf("%f\n",obj2.b);
           printf("%d\n",obj.a);
           printf("%f\n",obj.b);

}
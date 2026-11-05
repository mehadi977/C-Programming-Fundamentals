#include<stdio.h>
int main()
{
    int a;
     a= 20;
     printf("%d\n", a);
     printf("%p\n", &a);
     int*p=&a;
     printf("%p\n", p);
     printf("%p\n", &p);
     *p = 44;
     printf("%d\n", a);
     printf("%d\n", *p);
     
    return 0;
}
#include<stdio.h>
int main()
{
    int a[5]= {10,20,30,40,50};
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);
    //array name is a pointer, this is stored arry of 0 th address
    //prove
    printf("a er address %p\n", a);
    printf("%d\n", *a);//derefarance korle array er 0 tomo index er value print hobe

    //derefarence a[0]
    *a =121;
    printf("%d\n", a[0]);

    //array er 3 number index er value change korbo
    *(a+2) = 333;
    printf("%d\n", a[2]);
    return 0;
}
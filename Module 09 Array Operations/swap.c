#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("a %d b %d", a, b);
    return 0;
}
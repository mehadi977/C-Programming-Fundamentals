#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    scanf("%s %s", &a, &b);
    strcat(a, b);
    printf("%s %s", a,  b);

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    scanf("%s", &a);
    char b[20];
    scanf("%s", &b);
    strcpy(a, b);
    printf("%s %s", a, b);
    return 0;
}
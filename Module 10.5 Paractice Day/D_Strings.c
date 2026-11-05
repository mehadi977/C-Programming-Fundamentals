#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    scanf("%s", &a);
    char b[11];
    scanf("%s", &b);
    // printf("%s %s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);
    printf("%d %d\n", alen, blen);
    printf("%s%s\n", a, b);
    char afst = a[0];
    char bfst = b[0];
    a[0] = bfst;
    b[0] = afst;
    printf("%s %s", a, b);

    return 0;
}
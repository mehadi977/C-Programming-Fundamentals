#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    scanf("%s %s", a, b);
    // int len_b = strlen(b);
    // for (int i = 0; i <= len_b; i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a,b);
    printf("%s %s", a, b);

    return 0;
}
// Copy a string into another string without using strcpy()
#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    // strcpy(a, b);
    // printf("%s %s", a, b);
    int len_b = strlen(b);
    for (int  i = 0; i <len_b ; i++)
    {
        a[i]=b[i];
    }
    printf("%s %s", a, b);

    return 0;
}

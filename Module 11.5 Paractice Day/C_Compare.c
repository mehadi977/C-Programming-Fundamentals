#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int com = strcmp(a, b);
    if (com < 0)
    {
        printf("%s", a);
    }
    else if (com > 0)
    {
        printf("%s", b);
    }
    else if (com == 0)
    {
        printf("%s", a);
    }

    return 0;
}
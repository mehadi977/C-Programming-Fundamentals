#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    scanf("%s %s", a, b);

    int v = strcmp(a, b);
    // printf("%d", v);  // output ashbe -1, 0, 1
    if (v == 0)
    {
        printf("Equal");
    }
    else if (v < 0)
    {
        printf("A is smaller");
    }
    else if (v > 0)
    {
        printf("B is smaller");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    scanf("%s %s", a, b);
    int cmp = strcmp(a, b);
    // printf("%d", cmp);
    if (cmp < 0)
    {
        printf("a choto");
    }
    else if (cmp > 0)
    {
        printf(" b choto");
    }
    else if (cmp == 0)
    {
        printf("equal");
    }

    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("equal");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("a choto");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("b choto");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("a choto");
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("b choto");
    //         break;
    //     }

    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    return 0;
}
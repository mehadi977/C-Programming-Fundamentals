////[solve this without using strcmp()]

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char a[21], b[21];
//     scanf("%s %s", a, b);
//     // printf("%s %s", a, b);
//     int i = 0;
//     while (1)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("%s", b);
//             break;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("%s", a);
//             break;
//         }
//         else if (a[i] > b[i])
//         {
//             printf("%s", b);
//             break;
//         }
//         else if (a[i] == b[i])
//         {
//             i++;
//         }
//     }

//     return 0;
// }
//
//
//

// [solve this with strcmp()]
#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    // printf("%d", v);
    if (v == -1)
    {
        printf("%s", a);
    }
    else if (v == 1)
    {
        printf("%s", b);
    }
    else if (v == 0)
    {
        printf("%s", a);
    }

    return 0;
}
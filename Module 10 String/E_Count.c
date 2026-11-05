#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", a);  
    // printf("%s", a);
    int lenth = strlen(a);
    // printf("%d", lenth);
    int sum = 0;
    for (int i = 0; i < lenth; i++)
    {
        sum = sum + a[i] - '0';
    }
    printf("%d", sum);

    return 0;
}

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

// #include <stdio.h>
// int main()
// {
//     char a[1000001];
//     // fgets(a, 1000001, stdin);
//     scanf("%s", &a);
//     // printf("%s", a);
//     int sum = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         sum = sum + a[i]-48;
//     }
//     printf("%d", sum);

//     return 0;
// }
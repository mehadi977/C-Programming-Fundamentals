#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    // int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", -1);

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

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }
//     long long int x;
//     scanf("%lld", &x);

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//             printf("%d", i);
//             return 0;
//         }
//     }
//     printf("%d", -1);

//     return 0;
// }
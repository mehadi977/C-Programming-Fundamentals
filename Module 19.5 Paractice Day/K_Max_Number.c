#include <stdio.h>
#include <limits.h>
int rec(int n, int a[], int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int max = rec(n, a, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d", a[i]);
    }
    int ans = rec(n, a, 0);
    printf("%d", ans);

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

// #include <stdio.h>
// #include <limits.h>
// int rec(int n, int a[], int i)
// {
//     if (i == n - 1)
//     {
//         return a[i];
//     }
//     // int max = INT_MIN;
//     int max = rec(n, a, i + 1);
//     if (a[i] > max)
//     {
//         return a[i];
//     }
//     else
//     {

//         return max;
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         // printf("%d ", a[i]);
//     }
//     int ans = rec(n, a, 0);
//     printf("%d", ans);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) // 1st array input
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) // 2nd array input
    {
        scanf("%d", &b[i]);
        // printf("%d ", b[i]);
    }

    int c[n + m];
    for (int i = 0; i < n; i++) // coppy 1st array in 2nd array
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[i + n] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
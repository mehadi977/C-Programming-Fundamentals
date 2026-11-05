#include <stdio.h>
int shorting(int n, int a[])
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] < b[i])
            {
                int tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
}
int main()
{
    int n = 3;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }

    shorting(n, a);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
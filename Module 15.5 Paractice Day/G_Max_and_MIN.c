#include <stdio.h>
#include <limits.h>

// int min value

int max(int n, int a[])
{
    int maxv = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxv)
        {
            maxv = a[i];
        }
    }
    return maxv;
}

// int max value

int min(int n, int a[])
{
    int minv = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minv)
        {
            minv = a[i];
        }
    }
    return minv;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }

    int boro = max(n, a);
    // printf("%d ", boro);
    int choto = min(n, a);
    // printf("%d", choto);
    printf("%d %d", choto, boro);

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        // printf("%d ", a[i]);
    }
    if (sum < 0)
    {
        sum = sum * (-1);
    }

    printf("%lld", sum);
    return 0;
}
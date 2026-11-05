#include <stdio.h>
long long int sum(int n, int a[], int i, long long int add)
{
    if (i == n)
    {
        return add;
    }
    add += a[i];
    sum(n, a, i + 1, add);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int add = sum(n, a, 0, add);
    ;
    printf("%lld ", add);

    return 0;
}
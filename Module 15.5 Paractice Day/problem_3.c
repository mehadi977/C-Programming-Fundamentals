#include <stdio.h>
int count_odd(int n, int a[])
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            cnt++;
        }
    }
    return cnt;
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
    int cnt = count_odd(n, a);
    printf("%d",cnt);

    return 0;
}
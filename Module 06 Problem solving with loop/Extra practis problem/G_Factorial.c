#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        int n;
        scanf("%d", &n);

        long long int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("%lld\n", f);
    }

    return 0;
}
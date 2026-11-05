#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        long long int m;
        scanf("%lld", &m);
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        // printf("%lld %d %d %d",m,a,b,c);
        long long int mul = a * b * c;
        long long int ans = m / mul;
        if (m % mul == 0)
        {

            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
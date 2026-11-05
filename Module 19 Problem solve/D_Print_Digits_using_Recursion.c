#include <stdio.h>
void rec(long long int n)
{
    if (n == 0)
    {
        return;
    }

    rec(n / 10);
    int last = n % 10;
    printf("%d ", last);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        if (n==0)
        {
            printf("%d",0);
        }
        
        rec(n);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int pos = 0;
    int neg = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > 0)
        {
            pos = pos + a;
        }
        else if (a < 0)
        {
            neg = neg + a;
        }
    }
    printf("%d %d", pos, neg);

    return 0;
}
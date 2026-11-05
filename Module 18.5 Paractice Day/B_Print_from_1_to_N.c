#include <stdio.h>
void pp(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    printf("%d\n", i);
    pp(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    pp(n, 1);
    return 0;
}
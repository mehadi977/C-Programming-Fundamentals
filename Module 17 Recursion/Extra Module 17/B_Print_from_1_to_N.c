#include <stdio.h>
void cal(int n, int i)
{
    if (i == n+1)
    {
        return;
    }

    printf("%d\n", i);
    cal(n, i + 1);
}
int main()
{
    int n;

    scanf("%d", &n);
    cal(n, 1);

    return 0;
}
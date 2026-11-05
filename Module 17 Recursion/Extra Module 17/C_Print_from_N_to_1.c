#include <stdio.h>
void cal(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }

    cal(n - 1);
}
int main()
{
    int n;

    scanf("%d", &n);
    cal(n);

    return 0;
}
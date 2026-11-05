#include <stdio.h>
void pp(int n)
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

    pp(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    pp(n);
    return 0;
}
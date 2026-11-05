#include <stdio.h>
void rec(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    printf("I love Recursion\n");
    rec(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    rec(n, i);
    return 0;
}
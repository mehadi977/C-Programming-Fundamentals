#include <stdio.h>
void change_it(int n, int a[])
{
    a[n - 1] = 100;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
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
    change_it(n, a);

    return 0;
}
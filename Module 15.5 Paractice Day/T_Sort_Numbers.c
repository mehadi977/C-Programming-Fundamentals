#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;
    if (x > y)
    {
        int tmp = x;
        x = y;
        y = tmp;
    }
    if (y > z)
    {
        int tmp = y;
        y = z;
        z = tmp;
    }
    if (x > y)
    {
        int tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}
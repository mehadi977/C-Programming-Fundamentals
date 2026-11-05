#include <stdio.h>
int my_abs(int a)
{
    if (a < 0)
    {
        a = a * -1;
    }
    return a;
}
int main()
{
    int a;
    scanf("%d", &a);
    int value = my_abs(a);
    printf("%d", value);

    return 0;
}
#include <stdio.h>
void fun(int *x)
{
    *x = 30;
}
int main()
{
    int x = 20;
    fun(&x);
    printf("%d", x);

    return 0;
}
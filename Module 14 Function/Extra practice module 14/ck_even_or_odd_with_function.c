#include <stdio.h>
int ck(int n)
{
    int flag = 0;
    if (n % 2 == 0)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    return flag;
}
int main()
{
    int n = 3;
    int f = ck(n);
    // printf("%d", f);
    if (f == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}
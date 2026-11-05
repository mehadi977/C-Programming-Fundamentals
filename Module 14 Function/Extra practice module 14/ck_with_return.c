#include <stdio.h>
int ck()
{
    int n = 9;
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

    int f = ck();

    // printf("%d", f);
    if (f == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
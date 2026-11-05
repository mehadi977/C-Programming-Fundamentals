#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int asize = 14;
    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777, 774};
    int flag = 0;
    for (int i = 0; i < asize; i++)
    {
        if (n % a[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
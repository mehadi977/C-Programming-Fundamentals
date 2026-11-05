#include <stdio.h>
int main()
{
    int b = 0;
    for (int i=1; i<=25; i++)
    {
    b = 8*i;
    printf("8 * %d= %d\n",i,b);
    }

    return 0;
}
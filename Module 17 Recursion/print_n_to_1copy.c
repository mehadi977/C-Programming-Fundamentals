#include <stdio.h>
void pri(int i)
{
    if (i == 11)
    {
        return;
    }

    pri(i + 1);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    pri(i);

    return 0;
}
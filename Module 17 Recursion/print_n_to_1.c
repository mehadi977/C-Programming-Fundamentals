#include <stdio.h>
void pri(int i)
{
    if (i == 0) //base case
    {
        return;
    }

    printf("%d\n", i);
    pri(i - 1);
}
int main()
{
    int i = 10;
    pri(i);

    return 0;
}
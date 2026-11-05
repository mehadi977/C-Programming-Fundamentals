#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= value; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
        value++;
        space--;
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star; k++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }
    int star2 = star - 2;
    int space2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star2; k++)
        {
            printf("*");
        }

        printf("\n");
        star2 -= 2;
        space2++;
    }

    return 0;
}
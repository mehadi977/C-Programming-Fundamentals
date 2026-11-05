#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // upore
    int s = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < s; k++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        s += 2;
        space--;
    }
    
    //niche

    int s2 = s - 4;
    int space2 = 1;
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = 0; y < space2; y++)
        {
            printf(" ");
        }
        int row = n - 2 - x;
        for (int z = 0; z < s2; z++)
        {
            if (row % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        s2 -= 2;
        space2++;
    }

    return 0;
}
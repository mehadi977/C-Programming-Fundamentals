#include <stdio.h>
#include <math.h>
int main()
{
    int rc;
    scanf("%d", &rc);
    int a[rc][rc];
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // sum of primary diagonal matrix
    int sum_primary_diagonal = 0;
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            if (i == j)
            {
                sum_primary_diagonal += a[i][j];
            }
        }
    }
    // printf("%d ", sum_primary_diagonal);

    // sum of secendary diagonal matrix
    int sum_secendary_diagonal = 0;
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            if (i + j == rc - 1)
            {
                sum_secendary_diagonal += a[i][j];
            }
        }
    }
    int difference = sum_primary_diagonal - sum_secendary_diagonal;
    int absdiffrence = abs(difference);
    printf("%d", absdiffrence);

    return 0;
}
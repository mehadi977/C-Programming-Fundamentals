#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n != m)
    {
        printf("NO");
        return 0;
    }

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int diagonal_true = 0;
    int non_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                // 2 diagonal er vetore
                if (a[i][j] != 1)
                {
                    diagonal_true = 1;
                }
            }
            else
            { // baire
                if (a[i][j] != 0)
                {
                    non_diagonal = 1;
                }
            }
        }
    }

    if (diagonal_true == 0 && non_diagonal == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
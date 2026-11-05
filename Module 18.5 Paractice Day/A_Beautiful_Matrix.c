#include <stdio.h>
#include <math.h>
int main()
{
    int n = 5;
    int r = 0, c = 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    int moves = abs(r - 2) + abs(c - 2);
    printf("%d", moves);
    return 0;
}
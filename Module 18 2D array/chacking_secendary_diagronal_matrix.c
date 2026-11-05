#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 0;
    // 1st ck korbo eta squre matrix kina
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j == r-1)
                {
                    // printf("%d ",a[i][j]);
                    // diagronal er vetore achi
                }
                else
                { // diagronal er baire
                    if (a[i][j] != 0)
                    {
                        flag = 1;
                    }
                }
            }
        }
        // print it primary diagronal kina
        if (flag == 0)
        {
            printf("Its Secendary Diagronal Matrix");
        }
        else
        {
            printf("Its not Secendary diagronal Matrix");
        }
    }
    else
    {
        printf("This is not a primary diagronal matrix");
    }

    return 0;
}
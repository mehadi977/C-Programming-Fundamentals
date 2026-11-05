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
    printf("spacific row\n");
    int spacific_row;
    scanf("%d", &spacific_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[spacific_row][i]);
    }
    printf("\n\n");
    printf("spacidic colam\n");
    int spacific_colam;
    scanf("%d",&spacific_colam);
    for (int i = 0; i < r; i++)
    {
    printf("%d ", a[i][spacific_colam]);
    }
    
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
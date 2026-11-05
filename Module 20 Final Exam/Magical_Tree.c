#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // up
    int line_up = 0;
    int star_up = 1;
    if (n == 1)
    {
        line_up = 6;
    }
    else if (n == 3)
    {
        line_up = 7;
    }
    else if (n == 5)
    {
        line_up = 8;
    }
    else if (n == 7)
    {
        line_up = 9;
    }
    else if (n == 9)
    {
        line_up = 10;
    }
    else if (n == 11)
    {
        line_up = 11;
    }
    else if (n == 13)
    {
        line_up = 12;
    }
    else if (n == 15)
    {
        line_up = 13;
    }
    else if (n == 17)
    {
        line_up = 14;
    }
    else if (n == 19)
    {
        line_up = 15;
    }
    else if (n == 21)
    {
        line_up = 16;
    }
    int space_up = line_up - 1;
    for (int i = 0; i < line_up; i++)
    {
        for (int k = 0; k < space_up; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < star_up; j++)
        {
            printf("*");
        }

        printf("\n");
        star_up += 2;
        space_up--;
    }

    // down
    int line_down = 5;
    int star_down = n;
    int space_down = 5;
    for (int i = 0; i < line_down; i++)
    {
        for (int k = 0; k < space_down; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < star_down; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
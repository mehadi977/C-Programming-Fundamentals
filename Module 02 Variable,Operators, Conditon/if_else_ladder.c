#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger khabo\n");
    }
    else if (tk >= 50)
    {
        printf("Fuska khabo\n");
    }
    else if (tk >= 30)
    {
        printf("Chips khabo");
    }
    else if (tk >= 20)
    {
        printf("Icecream khabo");
    }
    else
    {
        printf("kichui khabo na\n");
    }

    return 0;
}
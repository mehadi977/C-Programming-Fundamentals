#include <stdio.h>
int main()
{
    int x;
    scanf("%c", &x);
    if (x >= 'A' && x <= 'z')
    {
        printf("ALPHA\n");
        if (x >= 'A' && x <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else if (x >= 'a' && x <= 'z')
        {
            printf("IS SMALL");
        }
    }
    else if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT");
    }

    return 0;
}
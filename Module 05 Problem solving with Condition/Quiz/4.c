#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1)
    {
        if (x == 0)
        {
            printf("inside if if\n");
            /* code */
        }
        else{
            printf("inside if else\n");
        }
    }
    else{
        printf("insede else\n");
    }

    return 0;
}
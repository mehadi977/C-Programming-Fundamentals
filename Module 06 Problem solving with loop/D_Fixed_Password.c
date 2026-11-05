// using while loop
#include <stdio.h>
int main()
{
    int p;
    while (scanf("%d", &p))
    {
        if (p == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

// // for loop
// #include <stdio.h>
// int main()
// {
//     int pas;
//     for (; scanf("%d", &pas);)
//     {
//         if (pas == 1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }

//     return 0;
// }

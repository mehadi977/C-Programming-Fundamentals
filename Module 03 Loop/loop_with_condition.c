////even or odd check by condition
// #include <stdio.h>
// int main()
// {
//     int i = 9;
//     if (i % 2 == 0)
//     {
//         printf("Its Even Number");
//     }
//     else
//     {
//         printf("Its odd Number");
//     }

//     return 0;
// }

////even number or odd number check by loop with condition

// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i <= 20; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d Even\n", i);
//         }
//         else
//         {
//             printf("%d Odd\n", i);
//         }
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d Even Number\n", i);
        }
        else
        {
            printf("%d Odd Number\n" ,i);
        }
    }

    return 0;
}
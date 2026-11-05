
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    if (t == 0)
    {
        printf("%d", 0);
    }

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        // if (n == 0)
        // {
        //     printf("0 ");
        // }

        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         for (; n != 0;)
//         {
//             // int m = n % 10;
//             printf("%d ", n % 10);
//             n /= 10;
//                 }
//         printf("\n");
//     }

//     return 0;
// }
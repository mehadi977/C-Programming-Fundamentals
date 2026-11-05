#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int value;
    int max = INT_MIN;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &value);
        if (value > max)
        {
            max = value;
        }
    }
    printf("%d", max);

    return 0;
}

// // min
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     int value;
//     int max = INT_MAX;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         scanf("%d", &value);
//         if (value < max)
//         {
//             max = value;
//         }
//     }
//     printf("%d", max);

//     return 0;
// }
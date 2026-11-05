// #include <stdio.h>
// long long int rec(long long int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n > 1)
//     {
//         return 1 + rec(n / 2);
//     }
//     else
//     {

//         return -1;
//     }
// }
// int main()
// {
//     long long int n;
//     scanf("%lld", &n);

//     long long int c = rec(n);
//     printf("%lld", c);
//     return 0;
// }
//
//
//
//
//
//
//
#include <stdio.h>
int rec(long long int n)
{
    if (n < 2)
    {
        return 0;
    }
    int ans = rec(n / 2);
    return ans + 1;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    int ans = rec(n);
    printf("%d", ans);
    return 0;
}

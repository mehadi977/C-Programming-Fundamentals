#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int m = a * b;
    long long int n = c * d;
    long long int x = m - n;
    printf("Difference = %lld", x);

    return 0;
}
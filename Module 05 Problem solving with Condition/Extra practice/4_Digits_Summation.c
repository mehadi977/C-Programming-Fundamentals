#include <stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int a = n % 10;
    long long int b = m % 10;
    long long int c = a + b;
    printf("%lld",c);

    return 0;
}
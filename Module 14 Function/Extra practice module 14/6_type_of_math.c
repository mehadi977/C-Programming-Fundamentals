#include <stdio.h>
#include <math.h>
int main()
{
    int n = 9;
    float m = 4.7;
    // scanf("%d", &n);
    float a = sqrt(n);
    float b = pow(n, 2);
    int c = floor(m);
    int d = ceil(m);
    float e = abs(m);

    printf("sqr %d \npower %d\n floor %d\n ceiling %d\n abslute %d\n", a, b, c, d, e);

    return 0;
}
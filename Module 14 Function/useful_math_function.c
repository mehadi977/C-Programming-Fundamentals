#include <stdio.h>
#include <math.h>
int main()
{
    // celing value
    int a = ceil(5.1);
    printf("chilling %d\n", a);
    // floor value
    int b = floor(5.1);
    printf("floor %d\n", b);
    // round value
    int c = round(5.1);
    int d = round(5.5);
    printf("round %d %d\n", c, d);
    // power value
    int e = pow(2, 3);
    printf("power %d\n", e);
    // squre root value
    float f = sqrt(20);
    printf("root %f\n", f);
    // abslute value
    int g = abs(-10);
    printf("abslute %d\n", g);
    return 0;
}
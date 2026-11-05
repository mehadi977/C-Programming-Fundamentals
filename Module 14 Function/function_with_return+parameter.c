#include <stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}
int mul(int num1, int num2)
{
    int ans = num1 * num2;
    return ans;
}
float div(float num1, int num2)
{
    float ans = num1 / num2;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(a,b);
    int val2 = sum(2, -5);
    printf("%d %d\n", val, val2);
    int val3 = sub(10, 5);
    int val4 = sub(15, 28);
    printf("%d %d\n", val3, val4);
    int val5 = mul(10, 5);
    int val6 = mul(15, 28);
    printf("%d %d\n", val5, val6);
    float val7 = div(10, 5);
    float val8 = div(15, 28);
    printf("%f %f\n", val7, val8);
    return 0;
}
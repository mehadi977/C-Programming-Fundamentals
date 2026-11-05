// function e jokhon array k pass kora hoy tokhon seta pass by refarence hisebe pass hoy
#include <stdio.h>
void fun(int a[], int n)
{
    printf("fun function %p\n", a);
    a[0] = 232;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n);

    printf("\n");
    printf("main function %p\n", a);

    return 0;
}
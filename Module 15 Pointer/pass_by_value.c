#include <stdio.h>
void fun(int x)
{
    x = 20;
    printf("fun function er x %p\n", &x);
}
int main()
{
    int x = 10;
    fun(x);
    // printf("%d\n", x);
    printf("main function er x %p", &x);
    return 0;
}
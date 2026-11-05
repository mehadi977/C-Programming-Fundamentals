#include<stdio.h>
// this is recursion
void hello()
{
    printf("Hello");
    hello();
}
int main()
{
    hello();
    return 0;
}
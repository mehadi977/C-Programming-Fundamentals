#include <stdio.h>
int g = 33; // global variable

int sum()
{
    scanf("%d", g);
    int x = 20;
    printf("%d", x);
    // return ans;
}
int main()
{
    scanf("%d", g);
    int x = 10;
    printf("main %d\n", x);
    sum();

    return 0;
}
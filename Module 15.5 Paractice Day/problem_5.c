#include <stdio.h>
void swap_it(int *a, int *b)
{

    int tmp = *a;
    *a = *b;
    *b = tmp;
    int x = *a;
    int y = *b;
        printf("%d %d", x, y);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);

    return 0;
}
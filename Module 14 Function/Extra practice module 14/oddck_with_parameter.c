#include <stdio.h>
void ck(int n)
{

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

}
int main()
{
    int n = 4;
    ck(n);

    return 0;
}
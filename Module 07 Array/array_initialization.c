#include <stdio.h>
int main()
{
    int a;                      // declare
    a = 12;                     // initialize
    int b = 10;                 // declare and initialize
    int x[5] = {1, 2, 3, }; // declare and initialize
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
    
    return 0;
}
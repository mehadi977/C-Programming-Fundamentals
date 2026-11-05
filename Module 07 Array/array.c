#include <stdio.h>
int main()
{
    int arr[20];
    arr[2] = 78;
    arr[1] = 439;
    arr[3] = 9833;
    printf("%ld\n", arr[3]);
    printf("%ld", arr[2]);
    return 0;
}
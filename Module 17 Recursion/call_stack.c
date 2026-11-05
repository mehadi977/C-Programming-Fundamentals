#include <stdio.h>
void shanto()
{
    printf("Shanto\n");
}
void hasan()
{
    printf("Hasan\n");
    shanto();
}
void mehadi()
{
    printf("Mehadi\n");
    hasan();
}
void ami()
{
    printf("ami\n");
    mehadi();
}
int main()
{
    printf("hi\n");
    ami();
    return 0;
}
#include <stdio.h>
int my_len(char a[])
{
    // printf("%s", a);
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {

        count++;
    }
    // printf("%d", count);
    return count;
}
int main()
{
    char a[100];
    scanf("%s", a);
    int len = my_len(a);
    printf("%d",len);

    return 0;
}
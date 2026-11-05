#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    scanf("%s", &a);
    char b[20];
    scanf("%s", &b);
    
    int alen = strlen(a);
    int blen = strlen(b);
    for (int  i = 0; i <= blen; i++) //null char soho nite hobe
    {
        a[i] = b[i];
    }
    printf("%s %s", a,b);
    return 0;
}
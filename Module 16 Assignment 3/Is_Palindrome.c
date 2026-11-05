#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int len = strlen(s);
    // printf("%d",len);
    int ck = 0;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[1005];
    scanf("%s", s);
    // printf("%s", s);
    int ck = is_palindrome(s);
    // printf("%d", ck);
    if (ck == 1)
    {
        printf("Palindrome");
    }

    else if (ck == 0)
    {
        printf("Not Palindrome");
    }

    return 0;
}
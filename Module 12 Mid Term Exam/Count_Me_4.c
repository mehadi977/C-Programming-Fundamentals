#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    // printf("%s", s);
    int len = strlen(s);
    // printf("%d", len);
    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int v = s[i] - 'a';
        count[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int len = strlen(s);
    // printf("%d", len);
    int first = 0;
    int last = len - 1;
    while (first < last)
    {
        if (s[first] != s[last])
        {
            printf("NO");
            return 0;
        }
        first++;
        last--;
    }

    printf("YES");

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];  //10^7
    scanf("%s", a);
    int count[26] = {0};
    int length = strlen(a);

    for (int i = 0; i < length; i++)
    {
        int n = a[i] - 'a';
        count[n]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}
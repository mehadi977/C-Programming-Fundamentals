#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);
        // printf("%s %s", s, t);
        int s_len = strlen(s);
        int t_len = strlen(t);

        int min_cal;
        if (s_len < t_len)
        {
            min_cal = s_len;
        }
        else
        {
            min_cal = t_len;
        }
        for (int i = 0; i < min_cal; i++)
        {
            printf("%c%c", s[i], t[i]);
        }
        // s string big
        int rem_s = s_len - min_cal;
        if (rem_s > 0)
        {
            for (int j = min_cal; j < s_len; j++)
            {
                printf("%c", s[j]);
            }
        }
        // t string big
        int rem_t = t_len - min_cal;
        if (rem_t > 0)
        {
            for (int j = min_cal; j < t_len; j++)
            {
                printf("%c", t[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
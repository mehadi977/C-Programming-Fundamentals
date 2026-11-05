#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int ager_farmer, notun_ashlo, somoy;
        scanf("%d %d %d", &ager_farmer, &notun_ashlo, &somoy);
        int sobai_mile = ager_farmer + notun_ashlo;
        // printf("%d", sobai_mile);
        int ekjon_kore = ager_farmer * somoy;
        // printf("%d", ekjon_kore);
        int sob_mile_kore = ekjon_kore / sobai_mile;
        // printf("%d", sob_mile_kore);
        int somoy_kom_lagbe = somoy - sob_mile_kore;
        printf("%d\n", somoy_kom_lagbe);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        char ch = 'A' + i - 1; // i=1 হলে A, i=2 হলে B, ...
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
            if (j < i)
                printf(" "); // স্পেস শুধু মাঝখানে
        }
        printf("\n");
    }

    return 0;
}

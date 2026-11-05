#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    
    // helped by chat gpt
    int max_indx = 0;
    int min_indx = 0;
    //

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_indx = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            min_indx = i;
        }
    }

    int tmp;
    tmp = a[max_indx];
    a[max_indx] = a[min_indx];
    a[min_indx] = tmp;
    //  printf("%d %d", max, min);
    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }

    return 0;
}
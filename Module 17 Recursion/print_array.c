#include <stdio.h>
void print_array(int a[], int n, int i)
{
    if (i == n) // n er age porjonto theme jaoar condition
    {
        return;
    }
    // array er value print kora
    printf("%d\n", a[i]);
    // eki function abr call kora i er man + 1 kora jeno index er man ek ek kore bere jai
    print_array(a, n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d", a[i]);
    }
    // array ta function e pass kore dilam
    print_array(a, n, 0);

    return 0;
}
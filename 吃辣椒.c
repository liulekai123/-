#include <stdio.h>
int main(void)
{
    int i, j, n, a1, a2;
    scanf("%d", &n);
    long long a[n + 1];
    scanf("%d%d", &a1, &a2);
    for (i = 1; i < n; i++)
    {
        a[1] = a1;
        a[2] = a2;
        if (i == 1)
            j = 2;
        else if (i == 2)
            j = 3;
        else
        {
            for (j = 3; j <= i; j++)
            {
                a[j] = a[j - 1] + a[j - 2];
            }
        }
        a[j] = a[j - 1];
        for (j = j + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + a[j - 2];
            a[j] = a[j] % 1000000007;
        }
        printf("%lld ", a[n] % 1000000007);
    }
    return 0;
}

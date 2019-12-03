#include <stdio.h>
int main()
{
    int x, y, N, i, j, n, num = 1;
    scanf("%d%d", &x, &y);
    int a[x][y];
    if (x < y)
        N = x;
    else
        N = y;
    for (n = 0; n <= N / 2; n++)
    {
        for (j = n; j <= y - n - 1; j++)
            a[n][j] = num++;

        for (i = n + 1; i < x - n - 1; i++)
            a[i][y - n - 1] = num++;

        for (j = y - n - 1; j > n; j--)
            a[x - n - 1][j] = num++;

        for (i = x - n - 1; i > n; i--)
            a[i][n] = num++;
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            printf("%2d ", a[i][j]);

        printf("\n");
    }
    return 0;
}

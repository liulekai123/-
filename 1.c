#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int count = 0, mynumber, yournumber, n;
    srand(time(0));
    mynumber = rand() % 100 + 1;
    printf("n=");
    scanf("%d", &n);
    while (count <= n)
    {
        printf("yournumber=");
        scanf("%d", &yournumber);
        if (yournumber < 0)
            break;
        count++;
        if (yournumber > mynumber)
        {
            printf("too big\n");
        }
        else if (yournumber < mynumber)
        {
            printf("too small\n");
        }
        else if (yournumber = mynumber)
            break;
    }
    if (count == 0)
        printf("game over");
    if (count == 1)
        printf("bingo");
    if (count == 2 || count == 3)
        printf("lucky you");
    if (count > 3 && count < n)
        printf("good gues");
    if (count > n)
        printf("game over");
    return 0;
}

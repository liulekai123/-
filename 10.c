#include <stdio.h>
int main(void)
{
    int n, scores,A=0,B=0,C=0,D=0,E=0;
    printf("n=");
    scanf("%d", &n);
    printf("scores=");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores);
        if (scores >= 90)
            A++;
        else if (scores >= 80 && scores < 90)
            B++;
        else if (scores >= 70 && scores < 80)
            C++;
        else if (scores >= 60 && scores < 70)
            D++;
        else if (scores < 60)
            E++;
    }
    printf("A=%d\nB=%d\nC=%d\nD=%d\nE=%d\n",A,B,C,D,E);
    return 0;
}
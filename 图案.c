#include<stdio.h>
int main(void)
{
    double i,j,n;
    printf("n=");
    scanf("%lf",&n);
    int a=n/2+1;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)printf(" ");
        for(j=1;j<=i;j+=0.5)printf("*");
        putchar('\n');
    }
    int b=a+1;
    for(i=b;i<=n;i++)
    {
        for(j=0;j<=i-b;j++)printf(" ");
        for(j=i-b;j<=n-i+2;j++)printf("*");
        putchar('\n');
    }
    return 0;
}
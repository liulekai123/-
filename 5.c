#include<stdio.h>
int main(void)
{
    int n,i;
    double sum=2/1,item,fengmu=1,fengzi=2;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        fengzi=fengmu+fengzi;
        fengmu=fengzi-fengmu;
        item=fengzi/fengmu;
        sum+=item;
    }
    printf("sum=%.2lf",sum);
    return 0;

}
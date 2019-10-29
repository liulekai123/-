#include<stdio.h>
int main(void)
{
    int i,j,n;
    double item,sum=1;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        item=1;
        for(j=1;j<=i;j++) item*=j;
        sum+=1/item;
    }
    printf("e=%lf",sum);
    return 0;

}
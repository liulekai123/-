#include<stdio.h>
int main(void)
{
    int i,j,n,item,sum=0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        item=1;
        for(j=1;j<=i;j++) item*=j;
        sum+=item;
    }
    printf("1!+...+%d!=%d",n,sum);
    return 0;
}
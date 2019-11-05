#include<stdio.h>
int main(void)
{
    int a,n,i,item=0,sum=0;
    printf("a=");
    scanf("%d",&a);
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        item=item*10+a;
        sum=sum+item;
    }
    printf("%d",sum);
    return 0;

}

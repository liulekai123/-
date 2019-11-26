#include<stdio.h>
#include<math.h>
int prime(int m);
int count=0;
int main(void)
{
    int m,n,sum=0;
    printf("输入两个数");
    scanf("%d%d",&m,&n);
    if(m>n)
    {
        int a=m;
        m=n;
        n=a;
    }
    for(m=m;m<=n;m++)
    {
        if(prime(m)!=0)
        {
            sum+=m;
        }
    }
    printf("count=%d\nsum=%d",count,sum);
    return 0;
}
int prime(int m)
{
    if(m==1) return 0;
    int n=sqrt(m);
    for(int i=2;i<=n;i++)
    {
        if(m%i==0) return 0;
    }
    count++;
    return 1;
}

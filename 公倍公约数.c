#include<stdio.h>
int sum(int m,int n);
int gkd(int m,int n);
int k,w;
int main(void)
{
    int m,n,i;
    printf("输入两个数:");
    scanf("%d%d",&m,&n);
    if(m>n)
    {
        i=m;
        m=n;
        n=i;
    }
    k=sum(m,n);
    printf("最小公倍数是%d\n",k);
    w=gkd(m,n);
    printf("最大公约数是%d\n",w);
    return 0;
}
int sum(int m,int n)
{
    int k;
    for(k=n;k<=m*n;k++)
    {
        if(k%m==0 && k%n==0) break;
    }
    return k;
}
int gkd(int m,int n)
{
    int w;
    for(w=m;w>=1;w--)
    {
        if(m%w==0 && n%w==0) break;
    }
    return w;
}
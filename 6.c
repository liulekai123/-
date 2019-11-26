#include<stdio.h>
#include<math.h>
int prime(int m);
int main(void)
{
    int i;
    for(i=1;i<=500;i++)
    {
        if(prime(i)!=0)
        {
            printf("%d ",i);
        }
    }
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
    return 1;
}
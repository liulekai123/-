#include<stdio.h>
int main(void)
{
    double s,t,sum1,sum2,sum;
    printf("s=");
    scanf("%lf",&s);
    printf("t=");
    scanf("%lf",&t);
    if(s<10)
        if(s<3) sum1=10;
        else sum1=10+(s-3)*2;
    else sum1=10+7*2+(s-10)*3;
    sum2=t/5*2;
    sum=sum1+sum2;
    printf("sum=%.0lf",sum);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double funcos(double e,double x);
int main(void)
{
    double e,x,cosx;
    printf("e=");
    scanf("%lf",&e);
    printf("x=");
    scanf("%lf",&x);
    printf("cosx=%lf",funcos(e,x));
    return 0;
}
double funcos(double e,double x)
{
    double item=1,sum=0,fenmu=1;
    int flag=1;
    for(int i=0;fabs(item)>=e;i=i+2)
    {
        fenmu=1;
        for(int j=1;j<=i;j++)fenmu=fenmu*j;
        printf("fenmu=%d ",fenmu);
        item=pow(x,i)/fenmu;
        printf("item=%lf ",item);
        sum=sum+flag*item;
        printf("sum=%lf\n",sum);
        flag=-flag;
    }
    return sum;
}
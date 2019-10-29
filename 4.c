#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    double s=1,x,item=1,i=1;
    printf("x=");
    scanf("%lf",&x);
    while(fabs(item)>=0.00001)
    {
        item=pow(x,i)/fact(i);
        s=s+item;
        i++;
    }
    printf("s=%.4lf",s);
    return 0;
}
double fact(int n)
{
    int i;
    double result=1;
    for(i=1;i<=n;i++) result*=i;
    return result;
}

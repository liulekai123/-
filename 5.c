#include<stdio.h>
#include<math.h>
int main(void)
{
    double item=1,i,sum=0,fenmu=1,a=1.0;
    while(fabs(item)>=0.0001)
    {
        item=a/fenmu;
        sum=sum+item;
        fenmu=fenmu+2;
        a=-a;
    }
    printf("%lf",4*sum);
    return 0;
}
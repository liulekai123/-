#include<stdio.h>
int main(void)
{
    double dianliang,dianfei;
    printf("dianliang=");
    scanf("%lf",&dianliang);
    if(dianliang<=50) dianfei=0.53*dianliang;
    else dianfei=0.53*50+0.58*(dianliang-50);
    printf("dianfei=%lf",dianfei);
    return 0;
}
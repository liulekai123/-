#include<stdio.h>
int dayofyear(int year,int mouth,int day);
int year,mouth,day;
int main(void)
{
    printf("put year and mouth and day:");
    scanf("%d%d%d",&year,&mouth,&day);
    printf("%d",dayofyear(year,mouth,day));
    return 0;
}
int dayofyear(int year,int mouth,int day)
{
    int k,leap;
    int x[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    leap=(year%4==0 && year%100!=0 || year%400==0);
    for(k=1;k<mouth;k++)
    {
        day=day+x[leap][k];
    }
    return day;
}
